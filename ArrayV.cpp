#include<iostream>
using namespace std;

//Pada array a[5], angka 5 berfungsi untuk menunjukan jumlah isi array yaitu 5
//Setelah dibandingkan dengan prgoram yang sebelum dan sesudah di ganti seperti pada soal diatas, hasilnya isi atau nilai yang tampil pada program berubah jadi 0 0 0 0 0 

//Deklarasi
int a[5]={2,4,6,8,10};
int jumlah=5;

void input(int data,int i){
    a[i] = data;
}

void tampil(int nElemen){
    for (int i = 0; i < nElemen; i++)
        cout<<a[i]<<" ";
        cout<<endl;
    
}
int main(){
    int data;
    cout<<"Belum ada perubahan data array"<<endl;
    tampil(jumlah);
    for (int i = 0; i < jumlah; i++){
        cout<<"a ["<<i<<"] = ";
        cin>>data;
        input(data,i);
    }
    cout<<"Setelah ada perubahan data array"<<endl;
    tampil(jumlah);
    return 0;
}