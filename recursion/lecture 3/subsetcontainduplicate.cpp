#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string s, string ans,int ini, vector<string>& v){
    if(ini==s.size()){
        v.push_back(ans);
        return;
    }
    char ch=s[ini];
    subset(s,ans+ch,ini+1,v);
    subset(s,ans,ini+1,v);
}
int main(){
   string s="aba";
   vector<string>  v;
   subset(s,"",0,v);
   for(int i=0;i<v.size();i++){
    sort(v[i].begin(),v[i].end());
}

sort(v.begin(),v.end());

for(int i=0;i<v.size();i++){
    if(v[i]!=v[i+1]){
     cout<<v[i];
     cout<<endl;
   }
}
}