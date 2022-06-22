#include <cstring>
#include <iostream>
using namespace std;
int t[10000][1000];

int coinchange(int n,int m,int s[]){
  if(n==0){
    return 1;
  }
   if(n<0){
        return 0;
     }
  if (m <= 0 && n >= 1)
        return 0;
    return  coinchange(n-s[m-1],m,s)+coinchange(n,m-1,s);
}

    int coinchangedp(int n, int m,int s[]){

    if(n==0){
    t[n][m]= 1;
  }
   if(n<0){
        return 0;
     }
  if (m <= 0 && n >= 1)
        t[n][m]= 0;
     if (t[n][m] != -1)
        return t[n][m];
                if(s[m-1]<=n)
    return t[n][m]=  coinchangedp(n-s[m-1],m,s)+coinchangedp(n,m-1,s);
    else
        return t[n][m]=  coinchangedp(n,m-1,s);
    }

int main()
{
  int n;
  cin>>n;
  int s[]= {1,2,3};
  int m=sizeof(s)/sizeof(s[0]);
 memset(t,-1, sizeof(t));
   cout<<coinchangedp(n,m,s);
  return 0;
}
