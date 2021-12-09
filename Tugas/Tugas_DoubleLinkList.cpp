//Tugas Strutur Data
//Deadline 4-1-21
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

//Membuat struct
struct tnode
{
    int data;
    struct tnode *next, *prev;
};

// Variabel Tnode
tnode *head, *tail, *del, *cur, *entry;

//Fungsi membuat sll
void CreateSLL(int data)
{
    head = (struct tnode*) malloc(sizeof(struct tnode));
    head -> data = data;
    head -> prev = NULL;
    head -> next = NULL;
    tail = head;
}
//Fungsi Menambahkan Simpul pada posisi pertama
void AddFirst(int data){
    if(head == NULL){
        cout<<"Silakan Buat SLL terlebih dahulu!"<<endl;
    }
    else{
        entry = (struct tnode*) malloc(sizeof(struct tnode));
        entry->data=data;
        entry->prev=NULL;
        entry->next=head;
        head->prev=entry;
        head=entry;
    }
}
//Fungsi Menghapus simpul pada posisi pertama
void RemoveFirst()
{
    int temp;
    if(head == NULL)
    {
        cout<<"Empity List"<<endl;
    }
    else
    {
        temp=head->data;
        del=head;
        head= head->next;
        head->prev=NULL;
        delete del;
        cout<<"\n";
        cout<<"======= Deleting Data ======"<<endl;
        cout<<"Data "<<temp<<" Deleted"<<endl;
    }
}
//Fungsi Menampilkan Simpul
void PrintList()
{
    cout<<endl<<"==== Print Member of List ===="<<endl;
    bool last=false;
    cur=head;
    while (!last)
    {
        if(cur==tail){
            last=true;
        }
        cout<<" "<<cur->data<<" ";
        cur=cur->next;
    }
}
//Fungsi Menampilkan Simpul secara terbalik
void ReversePrintList()
{
    cout<<endl<<"==== Reverse Print Member of List ===="<<endl;
    bool last=false;
    cur=tail;
    while (!last)
    {
        if(cur==head)
        {
            last=true;
        }
        cout<<" "<<cur->data<<" ";
        cur=cur->prev;
    }

}
//Utama
int main()
{
    cout<<"======================================"<<endl;
    cout<<"Akbar Hamonangan Lubis | IF19B "<<endl;
    cout<<"Tugas Struktur Data    | Double Link List"<<endl;
    cout<<"======================================"<<endl;
    //Membuat SLL
    CreateSLL(15);
    
    //Menambahkan Simpul pada posisi pertama
    AddFirst(20);
    AddFirst(30);

    //Mencetak hasil simpul
    PrintList();
    //Mencetak secara terbalik
    ReversePrintList();
    
    //Menghapus Simpul Posisi pertama
    
    RemoveFirst();
    //Mencetak hasil simpul
    PrintList();
    //Mencetak secara terbalik
    ReversePrintList();
}