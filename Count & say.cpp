#include <bits/stdc++.h>
using namespace std;

string Countsay(int n)
{
    if(n==1)
    {
        return "1";
    }
    string s= Countsay(n-1);
    int num =s[0]-'0';
    int i=1;
    int count =1;
    string t="";
    while(i<s.length())
    {
        if(s[i]-'0' == num)
        {
            count++;
        }
        else
        {
            t+=to_string(count);
            t+=to_string(num);
            num= s[i]-'0';
            count =1;
        }
        i++;
    }
    t+=to_string(count);
    t+=to_string(num);
    return t;
}

int main()
{
    int n=5;
    cout<<Countsay(n);
    return 0;
}
