#include<iostream>
#include<vector>
using namespace std;
void csum(int arr[],int tar,int n,vector<int> v,int idx){
    if(tar<0) return;
     if(tar==0){
        for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
     }
  for(int i=idx;i<n;i++){
    int k=arr[i];
    v.push_back(k);
    csum(arr,tar-k,n,v,i);
    v.pop_back();
  }
}
int main(){
    int arr[]={2,3,5,1};
    vector<int> v;
    int n=sizeof(arr)/sizeof(arr[0]);
    int tar=8;
   csum(arr,tar,n,v,0);
}