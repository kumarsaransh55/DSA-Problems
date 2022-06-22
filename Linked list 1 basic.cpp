#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int val){
	data=val;
	next=NULL;
		}
};

void insertattail(node* &head,int lol){
	node* n= new node(lol);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
}

void display(node* head){
	node* temp =head;
	do{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	while(temp!=NULL);
}

void insertathead(node* &head,int lolo){
	node* n= new node(lolo);
	n->next=head;
	head=n;
}

bool searching(node* head,int val){
	node* temp= head;
	while(temp!=NULL){
		if(temp->data==val){
			return true;
		}
		temp=temp->next;
	}
		return false;
}

void delathead(node* &head){
	node* todel= head;
	head=head->next;
	delete(todel);
}

void deletenode(node* &head,int val){
	node* temp=head;
	while(temp->next!=NULL){
			if(temp->next->data == val){
			 node* todelete= temp->next;
		     temp->next=temp->next->next;
		     delete(todelete);
		     break;
			}
		temp=temp->next;
	}
}

int main()
{
	node* head= NULL;
	insertathead(head,11);
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,8);
	display(head);
	cout<<searching(head,82);
	deletenode(head,3);
	display(head);
    return 0;
}
