#include <bits/stdc++.h>
using namespace std;

float median(int arr1[],int arr2[],int m,int n){
    int arr[m+n];
    int k=0;
    for(int i=0;i<m;i++){
    arr[k++]=arr1[i];
    }
    for(int i=0;i<n;i++){
    arr[k++]=arr2[i];
    }
    sort(arr,arr+m+n);
    if((m+n)%2==1){return arr[(m+n)/2];}
    else{
        return (arr[(m+n)/2]+arr[((m+n)/2)+1])/2;
    }
}

float optimisedapproach(int arr1[],int arr2[],int n,int m){
    if(m<n){
        return optimisedapproach(arr2,arr1,m,n);
    }
    int low=0;
    int high= n;
    int medianpos=(m+n+1)/2;
    int cut1,cut2;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        cut1=mid;
        cut2= medianpos-cut1;
        int l1=(cut1==0)? INT_MIN:arr1[cut1-1];
        int l2=(cut1==0)? INT_MIN:arr2[cut2-1];
        int r1=(cut1==n)? INT_MAX:arr1[cut1];
        int r2=(cut2==m)? INT_MAX:arr2[cut2];
        if(l1<=r2&&l2<=r1){
            if((n+m)%2==1){
                return max(l1,l2);
            }else{
            return (max(l1,l2)+min(r1,r2))/2.0;
            }
        }
        else if(l1>r2){
            high=cut1-1;
        }else{
        low=cut1+1;
        }
    }
    return 0.0;
}

int main(){
    int nums1[] = {1,4,7,10,12};
    int nums2[] = {2,3,8,15};
    int n = sizeof(nums1)/sizeof(nums1[0]);
    int m = sizeof(nums2)/sizeof(nums2[0]);
    cout<<"The median of two sorted array is "<<fixed<<setprecision(5)
    <<optimisedapproach(nums1,nums2,n,m);
return 0;
}
