#include <bits/stdc++.h>
using namespace std;

int strtoint(string s){
	int sign =1;
	int result=0;
	int i=0;
	int n= s.length();
			while(i<n&&s[i]==' '){
				i++;
			}
		if(i<n&&s[i]=='+'){
			sign =1;
			i++;
		}else if(i<n&& s[i]=='-'){
				sign=-1;
				i++;
		}
		while(i<n&& isdigit(s[i])){
			int dig= s[i]-'0';
			if(result>INT_MAX/10&&dig>INT_MAX%10){
				 return sign == 1 ? INT_MAX : INT_MIN;
			}

				result= result*10+dig;
			i++;
		}
		return sign*result;
}

int main()
{
    string s="   621ki";
    cout<<strtoint(s);
    return 0;
}
