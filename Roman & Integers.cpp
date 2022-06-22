#include <bits/stdc++.h>
using namespace std;

int lelo(char s){
		switch(s){
	case 'M': return 1000; break;
	case 'D': return 500;break;
	case 'C': return 100;break;
	case 'L': return 50;break;
	case 'X': return 10;break;
	case 'V' : return 5;break;
	case 'I': return 1;break;
	default :return 0;
	}
}

void roman_to_int(string s){
		int res=0;

		for(int i=0;i<s.length();i++){
		int s1= lelo(s[i]);
			if(i+1<s.length()){
		int s2= lelo(s[i+1]);
		if(s1< s2){
			res+= s2-s1;
			i++;
		}
		else res+= s1;
		}
		else res= res+s1;
		}
		cout<< res;
}

void int_to_roman(int n){
	string charray[]= {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string res="";
        for(int i=0;i<13;i++){
			while(n-values[i]>=0){
				res += charray[i];
				n -= values[i];
			}
        }
        cout<< res<<endl;
}

void nint_to_roman(int a)							// UPTO 3999;
{
    string ans;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    ans = M[a/1000]+C[(a%1000)/100]+X[(a%100)/10]+I[(a%10)];
    cout<<ans<<endl;
}

int main()
{
	string s="MCMCDXC";
	int n= 32443;
    //int_to_roman(n);
    roman_to_int(s);
    //nint_to_roman(n);
    return 0;
}
