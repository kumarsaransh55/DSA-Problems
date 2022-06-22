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
	if(head==NULL){
		cout<<"NULL";
		return;
	}
	node* temp =head;
	do{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	while(temp!=NULL);
	cout<<"NULL"<<endl;
}

node* Intersection(node* head1,node* head2){                //O(n*m)     O(1)
	while(head1){
		node* temp=head2;
		while(temp){
			if(head1==temp){
				return temp;
			}
			temp=temp->next;
		}
		head1=head1->next;
	}
		return NULL;
}

node* Intersect(node* head1,node* head2){                                        // O(n+m)   O(n);
	unordered_set<node* > st;
	while(head1){
		st.insert(head1);
		head1=head1->next;
	}
	while(head2){
		if(st.find(head2)!=st.end()){
			return head2;
		}
		head2=head2->next;
	}
	return NULL;
}

node* intersection0Present(node* head1,node* head2) {
 int diff = 1;
        if(diff < 0)
            while(diff++ != 0) head2 = head2->next;
        else while(diff-- != 0) head1 = head1->next;
        while(head1 != NULL&&head2!=NULL) {
            if(head1 == head2) return head1;
            head2 = head2->next;
            head1 = head1->next;
        }
        return head1;
}

node* intersectionPresent(node* head1,node* head2) {
    node* d1 = head1;
    node* d2 = head2;

    while(d1 != d2) {
	   if(d1!=NULL){
		d1=d1->next;
	   }
	   else
	   {d1=head2;}
			if(d2!=NULL){
		d2=d2->next;
	   }
	   else
	   {d2=head1;}
    }
    return d1;
}

int main()
{
	node* head= NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,8);
	node* head1= head;
	head=head->next->next;
	node* head2= new node(4);
	head2->next= head;
	display(head1);
	display(head2);
	node* result= intersectionPresent(head1,head2);
	display(result);
	cout<<result->data;
	return 0;
}
