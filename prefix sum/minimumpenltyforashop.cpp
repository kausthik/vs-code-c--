#include<iostream>
using namespace std;
// leetcode 2483
int main(){
    string s="yyny"; 
    int n=s.length()+1;
    // prefix sum for no -> 0 0 0 1 1 
   // suffix sum for yes -> 3 2 1 1 0  
   vector<int> prefix(n);
   vector<int> suffix(n);
   
   prefix[0]=0;
   for(int i=1;i<n;i++){
    prefix[i]=prefix[i-1]+((s[i-1]=='n') ? 1 : 0);
   }

   // for suffix
suffix[n-1]=0;
for(int i=(n-2);i>=0;i--){
    suffix[i]=suffix[i+1]+((s[i]=='y') ? 1 : 0);
   }
 
 // for penlty calculation
int min=suffix[0];
int idx=0;
 for(int i=0;i<n;i++){
     suffix[i]=suffix[i]+prefix[i];
     if(suffix[i]<min) {
        min=suffix[i];
        idx=i;
     }
   }

cout<<"the earliest hour for closing the shop for minimum penalty is "<<idx;


}