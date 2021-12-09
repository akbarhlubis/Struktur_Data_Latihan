#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct tnode
{
	int data;
	struct tnode *next;
};

tnode *head;
tnode *tail;
tnode *entry;
tnode *del;
tnode *cur;

void CreateSLL(int data)
{
	head = (struct tnode*) malloc(sizeof(struct tnode));
	head -> data = data;
	head -> next = NULL;
	tail = head;
}

void AddFirst(int data)
{
	if(head == NULL)
	{
		cout<<"Silakan Create SLL"<<endl;
	}
	else
	{
		entry = (struct tnode*) malloc(sizeof(struct tnode));
		entry -> data = data;
		entry -> next = head;
		head = entry;
	}
}

void AddLast(int data)
{
	if(head == NULL)
	{
		cout<<"Silakan Create SLL"<<endl;
	}
	else
	{
		entry = (struct tnode*) malloc(sizeof(struct tnode));
		entry -> data = data;
		entry -> next = NULL;
		tail -> next = entry;
		tail = entry;
	}
}

void AddMiddle(int data, int elemen)
{
	entry = (struct tnode*) malloc(sizeof(struct tnode));
	entry -> data = data;
	entry -> next = NULL;

	if(head)
	{
		cout<<"Silakan Create SLL"<<endl;
	}
	else
	{
		cur = head;
		while(cur -> data != elemen)
		{
			cur = cur -> next;
			entry -> next = cur ->next;
			cur -> next = entry;
		}
	}
}

void RemoveFirst()
{
	int temp;
	if(head == NULL)
	{
		cout<<"Silakan Create SLL"<<endl;
	}
	else
	{
		temp = head -> data;
		del	 = head;
		head = head -> next;
		delete del;
		cout<<"data "<<temp<<"  Telah DIhapus"<<endl;
	}
}

void RemoveLast()
{
	int temp;
	if(head == NULL)
	{
		cout<<"Silakan Create SLL<<endl";
	}
	else
	{
		if(head == tail)
		{
			temp = head -> data;
			del  = head;
			head = NULL;
			delete del;
			cout<<"Data "<<temp<<" Telah DIhapus"<<endl;
		}
		else
		{
			cur = head;
			while(cur -> next != tail)
			{
				cur = cur -> next;
			}
			temp = tail -> data;
			del  = tail;
			cur -> next = NULL;
			tail = cur;
			delete del;
			cout<<"Data "<<temp<<" Telah DIhapus"<<endl;
		}
	}
}

void RemoveMiddle(int elemen)
{
	if(head == NULL)
	{
		cout<<"Silakan Create SLL"<<endl;
	}
	else
	{
		cur = head;
		while(cur ->next -> data =! elemen)
		{
			cur = cur -> next;
		}
		del = cur -> next;
		cur -> next = cur -> next -> next;
		del -> next = NULL;
		delete del;
		cout<<"Data "<<del<<" Telah DIhapus"<<endl;
	}
}

void PrintList()
{
	cout<<endl<<"= Print Member Of list ="<<endl;
	cur = head;
	while(cur != NULL)
	{
		cout<<cur -> data<<endl;
		cur = cur -> next;
	}
}

main()
{
	CreateSLL(3);
	//Menambahkan DiPertama
	AddFirst(5);
	AddFirst(24);
	//Menambakan Ditengah
	AddMiddle(20,15);
	//Menambahkan Diakhir
	AddLast(10);
	AddLast(4);
	//Menampilkan dan Membuang Nilai
	PrintList();
	RemoveFirst();
	PrintList();
	RemoveLast();
	PrintList();
	RemoveMiddle(25);
	PrintList();
}