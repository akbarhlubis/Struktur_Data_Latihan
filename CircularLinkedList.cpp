//Struktur Data
//Deadline 21/1/21
//JAM 12 Malem

// X1. Penghapusan simpul pada circural linked list dari node awal.
// X2. Penghapusan simpul pada circural linked list dari node akhir
// 3. Penambahan simpul pada circural linked list pada posisi tertentu.
// X4. Penghapusan simpul pada circural linked list pada posisi tertentu.

#include<iostream>
#include<cstdlib>
using namespace std;

struct tnode{
    int data;
    struct tnode *next;
};

tnode *head,*cur,*entry;

void cetakList(){
    cout<<endl<<"====== Cetak Daftar Member ======"<<endl;
    cur=head;
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
void tambahAwal(int data){
    if(head!=NULL){
        cur=head;
        entry=(struct tnode*) malloc(sizeof(struct tnode));
        entry->data=data;
        while(cur->next !=head){
            cur=cur->next;
        }
        cur->next=entry;
        entry->next=head;
        head=entry;
    }
}
void tambahAkhir(int data){
    if(head!=NULL){
        cur=head;
        entry=(struct tnode*) malloc(sizeof(struct tnode));
        entry->data=data;
        while(cur->next !=head){
            cur=cur->next;
        }
        entry->next=head;
        cur->next=entry;
    }
}

int main(){
    buatCSLL(25);
    tambahAwal(7);
    tambahAwal(14);
    tambahAkhir(28);
    tambahAkhir(30);
    cetakList();
} 