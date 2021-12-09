#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct tnode{
    int data;
    struct tnode *next;
    struct tnode *prev;
};

tnode *head; 
tnode *tail;
tnode *del;
tnode *cur;
tnode *entry;

void create_SLL(int data){
    head = (struct tnode*) malloc(sizeof(struct tnode));
    head -> data = data;
    head -> prev = NULL;
    head -> next = NULL;
    tail = head;
}

void add_first(int data){
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
void remove_first(){
    int temp;
    if(head == NULL){
        cout<<"Empity List"<<endl;
    }
    else{
        temp=head->data;
        del=head;
        head= head->next;
        head->prev=NULL;
        delete del;
        cout<<"Data "<<temp<<" Telah Dihapus "<<endl;
    }
}
void printlist(){
    cout<<endl<<"==== Cetak List Member ===="<<endl;
    bool last=false;
    cur=head;
    while (!last){
        if(cur==tail){
            last=true;
        }
        cout<<cur->data<<endl;
        cur=cur->next;
    }
}
void reverse(){
    cout<<endl<<"==== reverse cetak List Member ===="<<endl;
    bool last=false;
    cur=tail;
    while (!last){
        if(cur==head){
            last=true;
        }
        cout<<cur->data<<endl;
        cur=cur->prev;
    }
}

int main(){
    create_SLL(5);
    add_first(12);
    add_first(25);
    add_first(45);
    printlist();
    reverse();
    remove_first();
    remove_first();
    printlist();
    add_first(50);
    printlist();
}