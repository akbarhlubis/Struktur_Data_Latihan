#include<iostream>
using namespace std;
int nilai[2][3]={{1,3,5},{2,4,6}};
void array1(){
    cout<<nilai[0][0];
    cout<<nilai[0][1];
    cout<<nilai[0][2]<<endl;
    cout<<nilai[1][0];
    cout<<nilai[1][1];
    cout<<nilai[1][2]<<endl;
}
void array2(){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<nilai[i][j];
        }
        cout<<endl;
    }
}
void array3(int ar[][3]){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<ar[i][j];
        }
        cout<<endl;
    }
}
void array4(){
    int hasil;
    int nilai[3][5]= {{1,5,10,15,20}, {2,4,6,8,10},{8,4,2,56,11}};
    cout<<nilai[0][3];
    cout<<nilai[0][4]<<endl;
    hasil = nilai[0][3] + nilai[0][4];
    cout<<hasil;
}
void array4(){
    
}
int main(){
    cout<<"Ini Contoh Array #1:"<<endl;
    array1();
    cout<<"Ini Contoh Array #2:"<<endl;
    array2();
    cout<<"Ini Contoh Array #3:"<<endl;
    array3(nilai);
    cout<<"Ini Contoh Array #4:"<<endl;
    array4();
}