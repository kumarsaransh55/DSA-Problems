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

node* reverseit(node* head){
    node* prevptr = nullptr;
    node* currptr = head;
    node* nextptr = nullptr; // Don't assume a non-NULL currptr
    while (currptr != nullptr) {
        nextptr = currptr->next; // Safe here: save next
        currptr->next = prevptr; // Do the reversal here
        prevptr = currptr;       // Step forward through
        currptr = nextptr;       // the list (prev/curr)
    //  nextptr = currptr->next; // WRONG HERE: currptr will be NULL at some point
    }
    return prevptr;
}

node* recursivereverse(node* &head){

if(head==NULL||head->next==NULL){
	return head;
}
	node* newhead =recursivereverse(head->next);
	head->next->next= head;
	head->next=NULL;
	return newhead;
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
	node* newhead1= recursivereverse(head);
	display(newhead1);
    return 0;
}
