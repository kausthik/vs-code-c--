#include<iostream>
using namespace std;
bool pali(string s,int ini,int n){
   if(s[ini]!=s[n]) return false;
   pali(s,ini+1,n-1);
   return true;
}
int main(){
    string s;
   cout<<"enter the string : "<<endl;
   cin>>s;
   int n=s.length();
   cout<<pali(s,0,n-1);
}