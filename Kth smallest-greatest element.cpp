#include <bits/stdc++.h>
using namespace std;

			// Another can be using quick sort

int main()
{
	int arr[] = { 7,4,10,3,20,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    set<int> s(arr, arr + n);
    auto itr = s.begin(); // s.begin() returns a pointer to first
                     // element in the set
	advance(itr,k-1);
    cout << *itr << "\n";
    return 0;
}
