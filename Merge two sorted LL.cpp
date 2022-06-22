#include <bits/stdc++.h>
using namespace std;

Node<int>* head= new Node<int>(100);
	Node<int>* temp= head;
	while(first&&second){
		if(first->data<=second->data){
			temp->next= first;
			temp=temp->next;
			first=first->next;
		}
		else{
			temp->next= second;
			temp=temp->next;
			second=second->next;
		}
	}
	if(first){
		temp->next= first;
		temp=temp->next;
		first=first->next;
	}
	if(second){
		temp->next= second;
		temp=temp->next;
		second=second->next;
	}
	return head->next;



int main()
{

    return 0;
}
