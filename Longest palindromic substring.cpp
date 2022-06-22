#include <iostream>
using namespace std;
void printSubstrings(string str)
{

    // finding the length of the string
    int n = str.length();

    // outermost for loop
    // this is for the selection
    // of starting point
    for (int i = 0; i < n; i++) {

        // 2nd for loop is for selection
        // of ending point
        for (int j = i; j < n; j++) {

            // 3rd loop is for printing from
            // starting point to ending point
            for (int k = i; k <= j; k++) {
                cout << str[k];
            }

            // changing the line after printing
            // from starting point to ending point
            cout << endl;
        }
    }
}

// Driver Code
int main()
{
    string str = "abcbd";
    printSubstrings(str);

    return 0;
}
