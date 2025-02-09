#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s="love is not good good love is good";
    stringstream ss(s);
    string temp;
   vector<string> v;
  while(ss>>temp){
    v.push_back(temp);
    }
   sort(v.begin(),v.end());
   int max =0;
   int count=1;

   for(int i=1;i<v.size();i++){
      if(v[i]==v[i-1]) count++;
      else count=1;
      if(count>max) max=count;
     } 
     cout<<"the max is :"<<endl;
     cout<<max<<endl;
    count=1;
   for(int i=1;i<v.size();i++){
     if(v[i]==v[i-1]){
      count++;
      if(count==max) cout<<v[i]<<endl;
     }
      else count=1;
   }
}