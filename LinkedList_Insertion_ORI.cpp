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

void createsll(int data)
{
	head = (struct tnode*) malloc(sizeof(struct tnode));
	head -> data = data;
	head -> next = NULL;
	tail = head;
}

void addfirst(int data)
{
	if(head == NULL)
	{
		cout<<"Silahkan Create SSL Dahulu"<<endl;
	}
	else
	{
		entry = (struct tnode*) malloc(sizeof(struct tnode));
		entry -> data = data;
		entry -> next = head;
		head = entry;
	}
}

void addlast(int data)
{
	if(head == NULL)
	{
		cout<<"Silahkan Create SSL Dahulu"<<endl;
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

void addmiddel(int data, int elemen)
{
	entry = (struct tnode*) malloc(sizeof(struct tnode));
	entry -> data = data;
	entry -> next = NULL;
					
	if(head == NULL)
	{
		cout<<"Silahkan Create SSL Dahulu"<<endl;
	}
	else
	{
		cur = head;
		while(cur -> data != elemen)
		{
			cur = cur -> next;
			entry -> next = cur -> next;
			cur -> next = entry;
		}
	}
}

void removefirst()
{
	int temp;
	if(head == NULL)
	{
		cout<<"Silahkan Create SSL Dahulu"<<endl;
	}
	else
	{
		temp = head -> data;
		del  = head;
		head = head -> next;
		delete del;
		cout<<"Data "<<temp<<" Telah Dihapus"<<endl;
	}
}

void removelast()
{
	int temp;
	if(head == NULL)
	{
		cout<<"Silahkan Create SSL Dahulu"<<endl;
	}
	else
	{
		if (head == tail)
		{
			temp = head -> data;
			del  = head;
			head = NULL;
			delete del;
			cout<<"Data "<<temp<<" Telah Dihapus"<<endl;
		}
		else
		{
			cur = head;
			while (cur -> next != tail)
			{
				cur = cur -> next;
			}
			temp = tail -> data;
			del = tail;
			cur -> next = NULL;
			tail = cur;
			delete del;
			cout<<"Data "<<temp<<" Telah Dihapus"<<endl;
		}
	}
}

void removemiddel(int elemen)
{
	if(head == NULL)
	{
		cout<<"Silahkan Create SSL Dahulu"<<endl;
	}
	else
	{
		cur = head;
		while(cur -> next -> data != elemen)
		{
			cur = cur -> next;
		}
		del = cur -> next;
		cur -> next = cur -> next -> next;
		del -> next = NULL;
		delete del;
		cout<<"Data "<<del<<" Telah Dihapus"<<endl;
		
	}
}

void printlist()
{
	cout<<endl<<"===== Print Members of List ====="<<endl;
	cur = head;
	while (cur != NULL)
	{
		cout<<cur -> data<<endl;
		cur = cur -> next;
	}
}

main()
{
	createsll(7);
	addfirst(10);
	addfirst(32);
	addlast(6);
	addlast(9);
	addmiddel(25,10);
	printlist();
	removefirst();
	printlist();
	removelast();
	printlist();
	removemiddel(25);
	printlist();
}