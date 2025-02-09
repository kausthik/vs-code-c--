#include<iostream>
using namespace std;
bool pali(string s){
    int i=0,j=s.length()-1;
    while(j>i){
        if(s[i]!=s[j]){
            return false;
        }
      i++;
      j--;
    }
    return true;
}
int main(){
   string s;
   cout<<"enter the string : "<<endl;
   cin>>s;
   cout<<pali(s);
}