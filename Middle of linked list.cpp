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

void middleofll(node* head){
	node* temp= head;
	int count=0;
	while(temp!=NULL){
		temp=temp->next;
		count++;
	}
	cout<<count<<"  ";
	temp=head;
	for(int i=0;i<(count/2);i++){
		temp=temp->next;
	}
	cout<<temp->data<<" ";
}

void torharemethod(node* head){
	node* hare=head;
	node*  tortoise=head;
	while(hare->next!=NULL &&hare!=NULL){
		tortoise=tortoise->next;
		hare=hare->next->next;
		if(hare->next->next==NULL ){
			cout<<tortoise->data<<" ";
			return;
		}
	}
	cout<<tortoise->data<<" ";
}

int main()
{
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	insertattail(head,5);
	insertattail(head,6);
	dispilay(head);
	cout<<endl;
    torharemethod(head);
    return 0;
}
