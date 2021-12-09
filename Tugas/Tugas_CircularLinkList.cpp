//Struktur Data
//Deadline 22/1/21
#include<iostream>
#include<cstdlib>
using namespace std;

struct tnode{
    int data;
    struct tnode *next;
};

tnode *head;
tnode *cur;

void cetakList(){
    cout<<endl<<"====== Cetak Daftar Member ======"<<endl;
    cur<=head;
    do{
        cout<<cur->data<<endl;
        cur = cur->next;
    }while (cur !=head);
}

void buatCSLL(int data){
    head = (struct tnode*) malloc(sizeof(struct tnode));
    head->data=data;
    head->next=head;
}
int main(){
    buatCSLL(6);
    cetakList();
}