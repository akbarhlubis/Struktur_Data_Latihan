#include<iostream>
using namespace std;

void cetak_array_int(int ar [], int len){
    for (int i = 0;i<len;i++){
        cout<<ar[i]<<endl;
    }
}
main(){
    int nilai[8]={1,2,3,4,5,6,7,8};
    cetak_array_int(nilai, sizeof(nilai)/sizeof(nilai[0]));
}