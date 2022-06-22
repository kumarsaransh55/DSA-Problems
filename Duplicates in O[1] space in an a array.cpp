#include <bits/stdc++.h>
using namespace std;

//Missing and Repeating number in an array of N size with [1,N] elements
void Findings(int arr2[],int n){
		n=sizeof(arr2)/sizeof(arr2[0]);
				cout<<n;
				int s= (n*(n+1))/2;
				int p= (n*(n+1)*(2*n+1))/6;
				for(int i=0;i<n;i++){
				s= s- arr2[i];
				p = p- (arr2[i]*arr2[i]);
				}
				int missing=0,repeated=0;
				missing=(s+(p/s))/2;
				repeated= missing-s;
				cout<<missing<<" "<<repeated<<endl;
}
void missing_repeated_number(int A[]) {
    long long int len = 5;

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;

    for(int i=0;i<5; i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
    missingNumber = (S + P/S)/2;
    repeating = missingNumber - S;
	cout<<missingNumber<<" "<< repeating<<endl;
}

int main()
{
    int arr[]= {1,3,2,4,2,2};
    int arr2[]={2,1,3,3,5};
    int n=sizeof(arr2)/sizeof(arr2[0]);
    cout<<n<<endl;
    Findings(arr2,n);
    int tor= arr[0];
    int hare= arr[0];
		do
		{
			tor= arr[tor];
			hare=arr[arr[hare]];
		} while (hare!=tor);
		hare= arr[0];
		while(hare!=tor){
			tor= arr[tor];
			hare=arr[hare];
		}
		//cout<<arr[hare]<<endl;
    return 0;
}
