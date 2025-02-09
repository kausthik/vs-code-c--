#include<iostream>
#include<vector>
using namespace std;
// subarray with unique element
void subarray(int arr[],int n,vector<int> v,int ini){
    if(ini==n){
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
       return;
    }
    int s=arr[ini];
    subarray(arr,n,v,ini+1);
    if(v.size()!=0 && v[v.size()-1]!=arr[ini-1]){
        return;
    }
    v.push_back(s);
    subarray(arr,n,v,ini+1);
}
int main(){
   int arr[]={1,2,3,4};
   vector<int> v;
   int n=sizeof(arr)/sizeof(arr[0]);
   subarray(arr,n,v,0);
}