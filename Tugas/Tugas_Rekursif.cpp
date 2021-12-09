#include <iostream>
using namespace std;
func_rec1(int n);
func_rec2(int x, int y);
func_rec3(int n);

int main(){
    int x,y;
    int a,b = 0;
    system("cls");
    cout<<"Menampilkan Secara mundur dari N sampai 1: ";
    cout<<func_rec1(10);
    cout<<"\n";
    cout<<"nilai: ";
    cin>>x;
    cout<<"pangkat: ";
    cin>>y;
    cout<<func_rec2(x,y);
    cout<<"\n";
    cout<<"Batas: ";
    cin>>a;
    cout<<"hasil: ";
    for (int i = 1 ; i<=a ; i++){
        cout<<func_rec3(b)<<endl;
        b++;
    }
    return 0;
}
int func_rec1(int n){
    if(n<2){
        return n;
    }
    else{
        cout<<n<<" ";
        return(func_rec1(n-1));
    }
}
int func_rec2(int x,int y){
    if (y==0){
        return 1;
    }
    else{
        return (x*func_rec2(x,y-1));
    }
}
int func_rec3(int n){
    if (n==0 ||n==1 ){
        return n;
    }
    else{
        return (func_rec3(n-1)+(func_rec3(n-2)));
    }
}   