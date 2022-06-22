#include <bits/stdc++.h>
using namespace std;
struct Process
{
int pid;
int arrival;
int bt;
int priority;
};


int main()
{
	int n;
	cin>>n;
	struct Process p[n];
	for(int i=0;i<n;i++){
		p[i].pid=i+1;
		cin>>p[i].arrival;
		cin>>p[i].bt;
		cin>>p[i].priority;
	}
	int wt=0;
	int tat=0;
	int waitavg;
	int tatavg;
	sort(p.begin(),p.end());
	for(int i=0;i<n;i++){
	if(i==0){
		wt=0;
	}
	else{
		wt=wt+p[i-1].second;
	}
	tat=wt+p[i].second;
	cout<<wt<<" "<<tat<<endl;
	}
	for(int i=0;i<n;i++){
	waitavg +=wt;
	tatavg+=tat;
	}
	cout<<waitavg<<"  "<<tatavg<<endl;
    return 0;
}
