#include<iostream>
#include<string>
#include<vector>
using namespace std;
// panagram checking--> string contain(a||A to z||Z)
int main(){
  string s;
  cout<<"enter the string s : "<<endl;
  getline(cin,s);
  int n=s.size();
  vector<int> v(n,0); // a -> 97 || A -> 65
  for(int i=0;i<n;i++){
   if(int(s[i])>=97 && int(s[i])<=(97+25)) v[int(s[i])-97]++;
   if(int(s[i])>=65 && int(s[i])<=(65+25)) v[int(s[i])-65]++;
   }
   int count=0;
   for(int i=0;i<n;i++){
    if(v[i]!=0) {
       count++;
   }
   }
   if(count>=26) cout<<"yup it's a panagram ";
   else cout<<"not a panagram";
  

}