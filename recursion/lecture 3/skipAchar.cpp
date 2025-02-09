#include<iostream>
using namespace std;
void removechar(string original,string ans){
    if(original.size()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='a' || ch=='A') removechar(original.substr(1),ans);
    else removechar(original.substr(1),ans+ch);
}
int main(){
    string str="kaushal the great";
    removechar(str,"");
}