#include <bits/stdc++.h>
using namespace std;

double getpower(int n,int mid){
int temp=mid;
for(int i=1;i<n;i++){
    mid=mid*temp;
}
return mid;
}

double findroot(int n,int m){
    int low=1;
    int high= m;
    int mid;
    double x;
    while(high-low>1e-6){
        mid=(high+low)/2;
        x=getpower(n,mid);
        if(x==m){
            return mid;
        }
        else if(x<m){
            low= mid;
        }else{
        high=mid;
        }
    }
        return mid;
}

int main(){
int n;
cin>>n;
int m;
cin>>m;
cout<<findroot(n,m);
return 0;
}
