#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
  unordered_set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  cout<<s.size()<<endl;
  for(int k : s){
    cout<<k<<" ";
  }
  cout<<endl;
  int target1=3;
  int target2=30;
  if(s.find(target1)!=s.end()){
    cout<<"exists";
  }
  else cout<<"not exist";
  

}
