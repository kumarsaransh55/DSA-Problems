#include<bits/stdc++.h>
using namespace std;

int optimised(vector<int> arr){
	int cnt = 0;
      int maxi = 0;
      for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
          cnt++;
        } else {
          cnt = 0;
        }
        maxi = max(maxi, cnt);
      }
      return maxi;
    }

int main() {
  vector<int> arr= {1,1,2,2,2,3,3};
  cout<<optimised(arr);
  cout << "The array after removing duplicate elements is " << endl;

}
