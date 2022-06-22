#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0]; // Maximum possible height difference

    int tempmin, tempmax;
    tempmin = arr[0];
    tempmax = arr[n - 1];

    for (int i = 1; i < n; i++) {
        tempmin= min(arr[0] + k,arr[i] - k); // Minimum element when we
                                                // add k to whole array
        tempmax = max(arr[i - 1] + k, arr[n - 1] - k); // Maximum element when we
                                                         // subtract k from whole array
        ans = min(ans, tempmax - tempmin);
    }
    return ans;
}

int main()
{
    int arr[]={7, 4, 8, 8, 8, 9 };
    int n=sizeof(arr)/sizeof(arr[0]);
	cout<<getMinDiff(arr,n,6);
    return 0;
}
