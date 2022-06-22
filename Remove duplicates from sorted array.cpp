#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[]) {
  set < int > set;
  for (int i = 0; i < 7; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();

  int j=0;
  for( auto it =set.begin();it!=set.end();it++){
	arr[j++]=*it;
  }
  return k;
}

void optimised(int arr[]){
	int i=0,j=0;
	int n= 7;
	while(j<n){
		if(arr[i]==arr[j]){
			j++;
		}else{
		i++;
		arr[i]=arr[j];
		j++;
		}
	}
	for (int i = 0; i < 3; i++) {
    cout << arr[i] << " ";
  }
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  optimised(arr);
  cout << "The array after removing duplicate elements is " << endl;

}
