#include<iostream>
using namespace std;

int kurang (int a, int b)
{
	int hasil;
	
	hasil = a - b;
	return hasil;
}

main()
{
	int umur,a,b;
	cout<<"Masukkan Tahun Lahirmu  = ";
	cin>>b;
	cout<<"Masukkan Tahun Saat Ini = ";
	cin>>a;
	
	umur = kurang(a,b);
	
	cout<<"Umur Anda : "<<umur;
}
