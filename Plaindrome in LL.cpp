#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int a) {
            num = a;
            next = NULL;
        }
};
//utility function to insert node in the list
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
//utility function to find length of the list
int lengthOfLinkedList(node* head) {
    int length = 0;
    while(head != NULL) {
        ++length;
        head = head->next;
    }
    return length;
}

//utility function to print the list
void printLinkedList(node* head) {
    while(head->next != NULL) {
        cout<<head->num<<"->";
        head = head->next;
    }
    cout<<head->num<<"\n";
}

node* findmid(node* head){
	node* slow=head;
	node* fast= head;
	while(fast->next&& fast->next->next){
			slow=slow->next;
			fast=fast->next->next;
	}
	return slow;
}

node* reverse(node* head){
	node* prev=NULL;
	node* curr= head;
	node* nex= NULL;
	while(curr!= NULL){
				nex= curr->next;
				curr->next= prev;
				prev= curr;
				curr=nex;
	}
	head=prev;
	printLinkedList(head);
	return head;
}

bool palindrome(node* head){
	node* mid= new node(0);
	    mid= findmid(head);
		node* newhead= reverse(mid->next);
		node* dummy = head;

    while(newhead!=NULL) {
        if(dummy->num!= newhead->num) return false;
        dummy = dummy->next;
        newhead= newhead->next;
    }
    return true;
}

int main() {
    node* head = NULL;
    int k = 3;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,3);
    insertNode(head,2);
    insertNode(head,1);
    cout<<"Original Linked List: "; printLinkedList(head);
		bool pal=palindrome(head);
			if(pal){
				cout<<"Palindrome";
			}
			else
				cout<<"no";
    return 0;
}
