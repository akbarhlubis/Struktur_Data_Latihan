#include<iostream>
using namespace std;

int a[10];
void input (int data, int i)
{
	a[i] = data;
}
void tampil(){
	for (int i=0; i<10; i++)
	cout<<a[i] <<" ";
	cout<<endl;
}
void tukar(int data1, int data2){
	long temp = a[data1]; a[data1]
	= a[data2];
	a[data2] = temp;
}
void selectionSort(){
	int i,j,indek;
	for(i=0; i<5-1; i++) {
		indek=i;
		for(j=i+1; j<5; j++)
		if (a[indek]>a[j])
		indek=j;
		tukar(i,indek);
	}
}
int main()
{
	input(57,0);
	input(89,1);
	input(49,2);
	input(51,3);
	input(12,4);
	input(90,5);
	input(1,6);
	input(0,7);
	input(63,8);
	input(25,9);
	
	cout<<"Sebelum di Selection Sort"<<endl;
	tampil();
	selectionSort();
	cout<<"\n";
	cout<<"Sesudah di Selection Sort"<<endl;
	tampil();
	
	return 0;
}