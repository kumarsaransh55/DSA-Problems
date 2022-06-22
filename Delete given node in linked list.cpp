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
	cout<<"NULL";
}

node*getnode(node* head,int n){
	while(head!=NULL){
			if(head->data==n){break;}
		head=head->next;
	}
	return head;
}

void deleteit(node* head){
	head->data=head->next->data;
	head->next=head->next->next;
	return;
}

int main()
{
	node* head= NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,8);
	//node* he1ad =reverseit(head);
	//display(he1ad);
	//node* newhead1= recursivereverse(head);
	node* head1= getnode(head,3);
	deleteit(head1);
	display(head);
    return 0;
}
