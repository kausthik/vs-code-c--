#include<iostream>
using namespace std;
void permu(string ans ,string s){
    if(s == ""){
       cout<<ans<<endl;
       return;
    }
    for(int i=0; i<s.length(); i++) {
    char ch = s[i];
    string left = s.substr(0, i);
    string right = s.substr(i+1);
    permu(ans+ch,left+right) ;
    }
}
int main(){
    string s="abc";
   permu("",s);
   
}