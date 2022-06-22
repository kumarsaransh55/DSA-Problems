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
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<head->data<<"\n";
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

    return 0;
}
