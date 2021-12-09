#include<iostream>
#include<cstdlib>
using namespace std;

struct tnode
{
    int data;
    struct tnode  *next;
};
tnode *head;
tnode *cur;

void printList(){
    cout<<endl<<"=== Print Member of List====="<<endl;
    cur=head;
    while (cur !=NULL)
    {
        cout<<cur->data<<endl;
        cur = cur->next;
    }
    
}

int main(){
    struct tnode *n1, *n2, *n3;
    n1 = (struct tnode*) malloc(sizeof(struct tnode));
    n2 = (struct tnode*) malloc(sizeof(struct tnode));
    n3 = (struct tnode*) malloc(sizeof(struct tnode));

    head = n1;
    n1->data=10;
    n1->next=n2;

    n2->data=16;
    n2->next=n3;
    
    n3->data=34;
    n3->next=NULL;

    printList();
 

}
