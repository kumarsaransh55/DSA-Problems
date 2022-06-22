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

void insertattail(node* &head, int val){
	node* n = new node(val);
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

void dispilay(node* head){
node* temp=head;
while(temp!=NULL){
	cout<<temp->data<<"->";
	temp=temp->next;
}cout<<"NULL";
}

void addition(node* l1,node* l2){
	node* l3= new node(NULL);
	int carry=0;
	node*temp=l3;
	while(l1!=NULL||l2!=NULL||carry){
		int sum=0;
		if(l1!=NULL){
			sum=sum+l1->data;
			l1=l1->next;
		}
		if(l2!=NULL){
			sum=sum+l2->data;
			l2=l2->next;
		}
		sum=sum+carry;
		carry=sum/10;
		node* newnode=new node(sum%10);
		temp->next= newnode;
		temp=temp->next;
	}
	dispilay(l3);
}

int main()
{
	node* l1=NULL;
	insertattail(l1,2);
	insertattail(l1,4);
	insertattail(l1,3);
	node* l2= NULL;
	insertattail(l2,5);
	insertattail(l2,6);
	insertattail(l2,4);
	dispilay(l1);
    addition(l1,l2);
    return 0;
}
