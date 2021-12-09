#include <iostream>
using namespace std;

//Data Diri
    // cout<<"\n";
    // cout<<"=====[Nama Mahasiswa]======\n";
    // cout<<"Akbar Hamonangan Lubis"<<endl;
    // cout<<"19312116"<<endl;
    // cout<<"IF19B\n"<<endl;

//Soal
// • Buat fungsi rekursif untuk menampilkan bilangan 
//   secara mundur dari N, dan berhenti jika nilainya sama dengan 1 ! 
// • Buat fungsi rekursif untuk menghitung perpangkatan! 
// • Buat fungsi rekursif untuk deret Fibonacci!

//Fungsi
int fungsi_nilai_mundur(int n){
    if(n<2){
        return n;
    }
    else{
        cout<<n<<" ";
        return(fungsi_nilai_mundur(n-1));
    }
}
int fungsi_perpangkatan(int x,int y){
    if (y==0){
        return 1;
    }
    else{
        return (x*fungsi_perpangkatan(x,y-1));
    }
}
void fungsi_fibonacci(int n){
    n = a;
    if (n==0 ||n==1 ){
        cout<<n;
    }
    else{
        a=(fungsi_fibonacci(n-1)+(fungsi_fibonacci(n-2)));
        cout<<a;
    }
}   
int main(){
    //deklarasi
    int nilai,pangkat;
    int batas, i = 0;
    system("cls"); // untuk menghapus layar
    //Nomor 1
    cout<<"1.   Menampilkan Secara mundur dari N sampai 1: \n";
    cout<<"     N: ";
    cout<<fungsi_nilai_mundur(10)<<endl;
    //Nomor 2
    cout<<"2.   Menghitung perpangkatan: \n";
    cout<<"     Input nilai: ";
    cin>>nilai;
    cout<<"     Input pangkat: ";
    cin>>pangkat;
    cout<<"     N: ";
    cout<<fungsi_perpangkatan(nilai,pangkat);
    cout<<"\n";
    //Nomor 3
    cout<<"3.   Menginput dan Menampilkan Deret Fibanocci:\n";
    cout<<"     Input batas deret: ";
    cin>>batas;
    cout<<"     N:";
    fungsi_fibonacci(i);
   return 0;
}