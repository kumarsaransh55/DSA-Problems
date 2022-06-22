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

void insertattail(node* &head,int val){
	node* n= new node(val);
	if(head==nullptr){
		head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL){
			temp=temp->next;
	}
	temp->next= n;
}

void dispily(node* head){
	node* temp= head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"Null";
}

void removenthfromend(node* head, int n){
	int count=0;
	if(head==NULL){return;}
	node* temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	n=count-n-1;
	temp=head;
		for(int i=0;i<n;i++){
			temp=temp->next;
		}
		node* todel= temp->next;
		temp->next=temp->next->next;
		delete(todel);
}

node* new_met(node* head,int n) {
        node* fast = head;
        node* slow = head;
        for(int i = 1; i <= n; ++i)
            fast = fast->next;
        while(fast->next != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }

int main()
{
		node* head=NULL;
		insertattail(head,1);
		insertattail(head,2);
		insertattail(head,3);
		insertattail(head,4);
		insertattail(head,5);
		dispily(head);
		node* newnn= new_met(head,2);
		dispily(newnn);
    return 0;
}
