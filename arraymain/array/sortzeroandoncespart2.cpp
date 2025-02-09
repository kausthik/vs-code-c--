// 2 pointers --> 2 variable
#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> v;
   int n,i=0;
   cout<<"enter the number of elements in a array ";
   cin>>n;
   int j=n-1;
   for(int i=0;i<n;i++){
    int x ;
    cin>>x;
    v.push_back(x);
   }
   while(i<j){
      if(v[j]==1) j--;
      if(v[i]==0) i++;
      if(i>j) break;
      if(v[j]==0 && v[i]==1){
           v[i]=0;
           v[j]=1;
           j--;
           i++;
      }
   }
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
}
