#include<iostream>
#include<stdio.h>
using namespace std;
/*
Membuat 3 Struktur yaitu, Manusia, Alamat, HariTanggal
Membuat 2 Fungsi yaitu CetakIdentitas dan HitungUsia
*/

//Struktur
struct Alamat
    {
        string jalan,kelurahan,kecamatan,kabupaten,provinsi,negara;
        int rt,rw;
    };
struct HariTanggal
    {
        int tanggal,bulan,tahun;
        string hari;
    };
struct Manusia
{
    string nama,agama,jeniskelamin,goldar,status;
    struct Alamat AlamatLengkap;
    struct HariTanggal TanggalLahir;
};
void CetakIdentitas(Manusia orang){
    cout<<"==========================\n";
    cout<<"===== Identitas Diri =====\n";
    cout<<"==========================\n";
    cout<<"Nama: "<<orang.nama<<endl;
    cout<<"Agama: "<<orang.agama<<endl;
    cout<<"Golongan Darah: "<<orang.goldar<<endl;
    cout<<"Jenis Kelamin: "<<orang.jeniskelamin<<endl;
    cout<<"Status: "<<orang.status<<endl;
    cout<<"\n";
    cout<<"===== Alamat Lengkap ======\n";
    cout<<"Jalan: "<<orang.AlamatLengkap.jalan<<endl;
    cout<<"Kelurahan: "<<orang.AlamatLengkap.kelurahan<<endl;
    cout<<"Kecamatan: "<<orang.AlamatLengkap.kecamatan<<endl;
    cout<<"Kabupaten: "<<orang.AlamatLengkap.kabupaten<<endl;
    cout<<"Provinsi: "<<orang.AlamatLengkap.provinsi<<endl;
    cout<<"Negara: "<<orang.AlamatLengkap.negara<<endl;
    cout<<"No. RT: "<<orang.AlamatLengkap.rt<<endl;
    cout<<"No. RW"<<orang.AlamatLengkap.rw<<endl;
    cout<<"\n";
    cout<<"===== Tahun Kelahiran =====\n";
    cout<<"Hari: "<<orang.TanggalLahir.hari<<endl;
    cout<<"Tanggal: "<<orang.TanggalLahir.tanggal<<endl;
    cout<<"Bulan: "<<orang.TanggalLahir.bulan<<endl;
    cout<<"Tahun: "<<orang.TanggalLahir.tahun<<endl;
}
void HitungUsia(Manusia orang){
    //Deklarasi
    int tahun,bulan,tanggal;
    int usia,bln,tgl;
    
    //Input
    cout<<"\n";
    cout<<"=== Perhitungan usia =====\n";
    cout<<"Masukan Tanggal Sekarang : ";
    cin>>tanggal;
    cout<<"Masukan Bulan Sekarang : ";
    cin>>bulan;
    cout<<"Masukan Tahun Sekarang : ";
    cin>>tahun;
    
    //Proses
    usia=tahun-orang.TanggalLahir.tahun;
    bln=bulan-orang.TanggalLahir.bulan;
    tgl=tanggal-orang.TanggalLahir.tanggal;

    cout<<usia<<" Tahun "<<bln<<" Bulan "<<tgl<<" Hari"<<endl;
    cout<<"Anda sudah berusia "<<usia<<" Tahun"<<endl;
}
int main(){
    //Deklarasi
    Manusia orang;

    //Data Diri
    cout<<"\n";
    cout<<"=====[Nama Mahasiswa]======\n";
    cout<<"Akbar Hamonangan Lubis"<<endl;
    cout<<"19312116"<<endl;
    cout<<"IF19B\n"<<endl;

    orang.nama="Akbar Hamonangan Lubis";
    orang.agama="Islam";
    orang.goldar="O";
    orang.jeniskelamin="Laki-Laki";
    orang.status="Belum Menikah";
    orang.AlamatLengkap.jalan="Imam Bonjol";
    orang.AlamatLengkap.kelurahan="Sumberejo";
    orang.AlamatLengkap.kecamatan="Kemiling";
    orang.AlamatLengkap.kabupaten="Bandar Lampung";
    orang.AlamatLengkap.provinsi="Lampung";
    orang.AlamatLengkap.negara="Indonesia";
    orang.AlamatLengkap.rt=123;
    orang.AlamatLengkap.rw=462;
    orang.TanggalLahir.hari="Jum'at";
    orang.TanggalLahir.tanggal=17;
    orang.TanggalLahir.bulan=11;
    orang.TanggalLahir.tahun=2000;
    
    //Fungsi
    CetakIdentitas(orang);
    HitungUsia(orang);
}