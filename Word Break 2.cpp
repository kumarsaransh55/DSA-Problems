#include <bits/stdc++.h>
using namespace std;

void getallsentences(int start,string &s, vector<string> &dict,string &curr,vector<string > &ans){
    if(start>=s.size()){
        ans.push_back(curr);
        return;
    }
    for(int i=start;i<s.size();i++){
        string left= s.substr(start,i-start+1);
        bool ispresent=false;
        for(auto it=dict.begin();it!=dict.end();it++){
            if(*it==left){
                ispresent=true;
                break;
            }
        }
        if(ispresent){
                string temp= curr;
                curr+= left+" ";
            getallsentences(i+1,s,dict,curr,ans);
                curr= temp;
        }
    }
}

vector<string> solve(string &s,vector<string> &dict){
    vector<string> ans;
    string curr="";
    getallsentences(0,s,dict,curr,ans);
    return ans;
}

int main(){
    vector<string> dict={"god", "is", "now","no", "where","here"};
    string s="godisnowherenowhere";
    vector<string> ans= solve(s,dict);
    for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
    }
return 0;
}
