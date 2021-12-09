#include <iostream>
using namespace std;
//Deklarasi
int nilai1[3][5]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3}}; //3 kolom dan 5 angka |  3= {{},{},{}} dan 5={1,1,1,1,1},...
int nilai2[50][50],h,i,j,b=1;

//Fungsi
void Nomor1(){
    for(int i=0;i<3;i++){ 
        for(int j=0;j<5;j++){
            cout<<nilai1[i][j];
        }
        cout<<endl;
    }
    cout<<"\n";
}
void Nomor2(){
	while(b<2)
	{
		cout<<"Masukan Input  =";cin>>h;
		for(i=1;i<=h;i++)
		{
			for(j=0;j<h;j++)
			{
				if(i==1||i==h||j==h-i)
				{
					nilai2[i][j]=1;
				}else
				{
					nilai2[i][j]=0;
				}
				cout<<nilai2[i][j];
			}
			cout<<endl;
		}	
			cout<<endl;
	}
}
//Utama
int main(){
    system("cls");
    cout<<"------------------\n";
    cout<<"--Tugas Array 2D--\n";
    cout<<"------------------\n";
    cout<<"Hasil Nomor 1: "<<endl;
    Nomor1();
    cout<<"Hasil Nomor 2: "<<endl;
    Nomor2();
}