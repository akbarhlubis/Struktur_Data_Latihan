#include<iostream>
using namespace std;
void matriks1(){
    int t,i,matrik[3][4];
	for(t=0;t<3;t++)
	for(i=0;i<4;i++)
		matrik[t][i] = (t*4)+i+1;
	for(t=0; t<3; t++) {
		for(i=0; i<4; i++)
		cout<<matrik[t][i]<<" ";
		cout<<endl;
	}

}
void matriks2(){
    int t,i,matrik[2][8];
	for(t=0;t<2;t++)
	for(i=0;i<8;i++)
		matrik[t][i] = (t*8)+i+1;
	for(t=0; t<2; t++) {
		for(i=0; i<8; i++)
		cout<<matrik[t][i]<<" ";
		cout<<endl;
	}
}


int main()
{
	matriks1();
    cout<<endl;
    matriks2();
}