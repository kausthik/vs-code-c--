#include<iostream>
using namespace std;
void subset(string s,string ans,int ini ){
    if(ini==s.length()){
        cout<<ans;
        cout<<endl;
        return;
    }
    char ch=s[ini];
    subset(s,ans+ch,ini+1);
    subset(s,ans,ini+1);
    
}
int main(){
 string s="aba";
 subset(s,"",0);
}
