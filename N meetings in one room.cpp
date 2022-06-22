#include <bits/stdc++.h>
using namespace std;

struct meeting{
		int start;
		int ending;
		int pos;
};

bool customcomp(struct meeting meet1, struct meeting meet2){
		return meet1.ending<meet2.ending;
}

void returnmeetings(int start[],int end[], int n){
		vector<meeting > meet(n);
		for(int i=0;i<n;i++){
			meet[i].start= start[i];
			meet[i].ending= end[i];
			meet[i].pos= i+1;
		}
			sort(meet.begin(),meet.end(), customcomp);
			for(int i=0;i<n;i++){
			cout<<meet[i].start<<meet[i].ending<<meet[i].pos<<endl;
			}
			cout<<meet[0].pos<<" ";
			int endone= meet[0].ending;
		for(int i=1;i<n;i++){
			if(endone<=meet[i].start){
				cout<<meet[i].pos<<" ";
				endone= meet[i].ending;
			}
		}
}

int main()
{
   int n = 6;
   int start[] = {1,3,0,5,8,5};
   int end[] = {2,4,3,7,9,6};
	returnmeetings(start,end,n);
		return 0;
}
