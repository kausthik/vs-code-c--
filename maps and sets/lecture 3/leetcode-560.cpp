#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<vector>
// in case of positive
using namespace std;
int subarraysum(vector<int> &nums , int k){
   int count=0;
   unordered_map<int,int> m;
   vector<int> prefix(nums.size());
   prefix[0]= nums[0];
   for(int i=1;i<nums.size();i++){
    prefix[i]=prefix[i-1]+nums[i];
   }
   for(int i=0;i<prefix.size();i++){
    if(prefix[i]==k) count++;
    if(m.empty()){
    m[prefix[i]]++;
    }
    else{
      if(m.find(prefix[i]-k)!=m.end()) count=count+m[prefix[i]];
      m[prefix[i]]++;
    }
   }
   return count;
}
int main(){
  // vector<int> nums;
  // int size ;
  // cout<<"enter the size "<<endl;
  // cin>>size;
  // for(int i=0;i<size;i++){
  //   int k;
  //   cin>>k;
  //   nums.push_back(k);
  // }
  // int tar;
  // cout<<"enter the targeted value"<<endl;
  // cin>>tar;
  // cout<<"the result"<<endl;
  // cout<<subarraysum(nums,tar);

  unordered_map<int,int> m;
  unordered_map<int,int> n;

  m[4]++;
  n[4]++;
  n[5]++;
  m[5]++;
  m[6]++;
  m[6]--;


  cout<<m[6];

}