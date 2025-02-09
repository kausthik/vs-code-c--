#include<iostream>
using namespace std;
void removechar(string original,string ans,int ini){
    if(ini==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[ini];
    if(ch=='a' || ch=='A') removechar(original,ans,ini+1);
    else removechar(original,ans+ch,ini+1);
}
int main(){
    string str="kaushal the great";
    removechar(str,"",0);
}