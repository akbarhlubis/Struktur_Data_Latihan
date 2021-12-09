#include <iostream>
using namespace std;
int faktorial1(int n){
    int h = 1;
    for (int i=n;i>0;i--){
        h=h*i;
    }
    return(h);
}
int faktorial2(int n){
    int h=1;
    int i=n;
    while (i>0)
    {
        h=h*i;
        i--;
    }
    return(h);
}
int fac_rec(int n){
    if(n<=1){
        return 1;
    }
    else{
        return(n*fac_rec(n-1));
    }
}
int exer1(int n){
    if(n<=1){
        cout<<1;
        return 1;
    }
    else{
        cout<<n<<" ";
        return(exer1(n-1));
    }
}
int main(){
    system("cls");
    cout<<"Cara Pertama (for):";
    cout<<faktorial1(5)<<endl;
    cout<<"Cara Kedua (while): ";
    cout<<faktorial2(5)<<endl;
    cout<<"Cara Ketiga (Rekursif):";
    cout<<fac_rec(5)<<endl;
    cout<<"Latihan 1: ";
    cout<<exer1(5);
}