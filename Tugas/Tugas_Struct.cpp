#include<iostream>
#include<stdio.h>
using namespace std;

/*
Membuat 3 Struktur yaitu, Manusia, Alamat, HariTanggal
Membuat 2 Fungsi yaitu CetakIdentitas dan HitungUsia
*/

//Struktur
struct Manusia
{
    string nama,agama,jeniskelamin,goldar;
    struct Alamat
    {
        string jalan,kelurahan,kecamatan,kabupaten,profinsi,negara;
        int rt,rw;
    }AlamatLengkap;
    struct HariTanggal
    {
        int tanggal,bulan,tahun;
        string hari;
    }TanggalLahir;
};
void CetakIdentitas(Manusia mns){
    cout<<mns.nama<<endl;
    cout<<mns.agama<<endl;
    cout<<mns.jeniskelamin<<endl;
    cout<<mns.AlamatLengkap.jalan<<endl;
    cout<<mns.AlamatLengkap.kelurahan<<endl;
    cout<<mns.AlamatLengkap.kecamatan<<endl;
    cout<<mns.AlamatLengkap.profinsi<<endl;
    cout<<mns.AlamatLengkap.negara<<endl;
    cout<<mns.AlamatLengkap.rt<<endl;
    cout<<mns.AlamatLengkap.rw<<endl;
    cout<<mns.TanggalLahir.hari<<endl;
    cout<<mns.TanggalLahir.tanggal<<endl;
    cout<<mns.TanggalLahir.bulan<<endl;
    cout<<mns.TanggalLahir.tahun<<endl;
}
void HitungUsia(Manusia mns){
    int umur,ts;
    cout<<"Masukan Tahun Sekarang : ";
    cin>>ts;

    umur=ts-mns.TanggalLahir.tahun;
    cout<<umur;

}
int main(){
    //Deklarasi
    Manusia mns;

    //Data Diri
    mns.nama="Akbar";
    mns.agama="Islam";
    mns.jeniskelamin="Laki-Laki";
    mns.goldar="O";
    mns.AlamatLengkap.jalan="Imam Bonjol";
    mns.AlamatLengkap.kelurahan="Sumberejo";
    mns.AlamatLengkap.kecamatan="Kemiling";
    mns.AlamatLengkap.profinsi="Lampung";
    mns.AlamatLengkap.negara="Indonesia";
    mns.AlamatLengkap.rt=12;
    mns.AlamatLengkap.rw=50;
    mns.TanggalLahir.hari="Senin";
    mns.TanggalLahir.tanggal=17;
    mns.TanggalLahir.bulan=11;
    mns.TanggalLahir.tahun=2000;
    CetakIdentitas(mns);
    HitungUsia(mns);
    
}