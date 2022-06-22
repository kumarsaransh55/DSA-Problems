#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;
        node(int a) {
            data = a;
            next = NULL;
        }
};

void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    return;
}

int lengthOfLinkedList(node* head) {
    int length = 0;
    while(head != NULL) {
        ++length;
        head = head->next;
    }
    return length;
}

void printLinkedList(node* head) {
    while(head != NULL) {
        cout<<head->data<<"->";
        head = head->next;
    }
    //cout<<head->data<<"\n";
}

void rotatell(node* &head,int k){
	node* temp= head;
	node* lastnode=NULL;
	int n=lengthOfLinkedList(head);
	k=k%n;
	while(temp->next!=NULL){temp=temp->next;}
		temp->next= head;
		for(int i=0;i<n-k;i++){
			temp=temp->next;
		}
		head=temp->next;
		temp->next=NULL;
}

int main() {
    node* head = NULL;
    int k = 3;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    insertNode(head,6);
    rotatell(head,2);
    printLinkedList(head);
    return 0;
}
