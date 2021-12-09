//UAS Struktur Data
//Akbar Hamonangan Lubis
#include<iostream>
#include<stdio.h>
using namespace std;

//Jawaban Nomor 1
struct Pegawai 
{
    string NIK,Nama,JenisKelamin;
    struct Bidang
    {
        string Umum,Gudang,Keuangan;
    }BidangLengkap;
};


void CetakIdentitas(Pegawai pgw){
    cout<<"==========================\n";
    cout<<"====== Data Pegawai ======\n";
    cout<<"==========================\n";
    cout<<"NIK             : "<<pgw.NIK<<endl;
    cout<<"Nama Pegawai    : "<<pgw.Nama<<endl;
    cout<<"Jenis Kelamin   : "<<pgw.JenisKelamin<<endl;
    cout<<"Bidang Umum     : "<<pgw.BidangLengkap.Umum<<endl;
    cout<<"Bidang Gudang   : "<<pgw.BidangLengkap.Gudang<<endl;
    cout<<"Bidang Keuangan : "<<pgw.BidangLengkap.Keuangan<<endl;
}//Akhir Jawaban Nomor 1

//Jawaban Nomor 2

//Akhir Jawaban Nomor 2
//Jawaban Nomor 3
void Daftar_Cetak_Pegawai(Pegawai pgw){
    cout<<"Silakan Daftar\n";
    cout<<"NIK             : ";
    cin>>pgw.NIK;
    cout<<"Nama Pegawai    : ";
    cin>>pgw.Nama;
    cout<<"Jenis Kelamin   : ";
    cin>>pgw.JenisKelamin;
    cout<<"Bidang Umum   : ";
    cin>>pgw.BidangLengkap.Umum;
    cout<<"Bidang Gudang   : ";
    cin>>pgw.BidangLengkap.Gudang;
    cout<<"Bidang Keuangan   : ";
    cin>>pgw.BidangLengkap.Keuangan;
    cout<<"==========================\n";
    cout<<"====== Data Pegawai ======\n";
    cout<<"==========================\n";
    cout<<"NIK             : "<<pgw.NIK<<endl;
    cout<<"Nama Pegawai    : "<<pgw.Nama<<endl;
    cout<<"Jenis Kelamin   : "<<pgw.JenisKelamin<<endl;
    cout<<"Bidang Umum     : "<<pgw.BidangLengkap.Umum<<endl;
    cout<<"Bidang Gudang   : "<<pgw.BidangLengkap.Gudang<<endl;
    cout<<"Bidang Keuangan : "<<pgw.BidangLengkap.Keuangan<<endl;
}
//Akhir Jawaban Nomor 3

int main(){
    //Deklarasi
    Pegawai pgw;

    //Data Diri
    cout<<"\n";
    cout<<"=====[Nama Mahasiswa]======\n";
    cout<<"Akbar Hamonangan Lubis"<<endl;
    cout<<"19312116"<<endl;
    cout<<"IF19B\n"<<endl;

    cout<<"===Silakan Daftarkan Nama ====\n";
    Daftar_Cetak_Pegawai(pgw);


}
