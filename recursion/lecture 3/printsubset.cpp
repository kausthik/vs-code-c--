#include<iostream>
using namespace std;
void subset(string s,string ans ){
    if(s.length()==0){
        cout<<ans;
        cout<<endl;
        return;
    }
    char ch=s[0];
    subset(s.substr(1),ans);
    subset(s.substr(1),ans+ch);
}
int main(){
 string s="kau";
 subset(s,"");
}
