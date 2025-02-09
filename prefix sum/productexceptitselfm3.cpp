#include<iostream>
#include<vector>
using namespace std;
// leetcode 238
// Product of array except self , sir method
void presuf(vector<int>& v,vector<int>& pre,vector<int>& suf){
    int n=v.size();
    pre[0]=1;
    suf[n-1]=1;
    suf[n-2]=v[n-1];
   for(int i=(n-3);i>=0;i--){
    suf[i]=v[i+1]*suf[i+1];
   }
   for(int i=1;i<n;i++){
      pre[i]=v[i-1]*pre[i-1];
   }
}

int main(){
    int n;
    cout<<"enter the size of the vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the vector : "<<endl; 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> pre(n);
    vector<int> suf(n);
    presuf(v,pre,suf);

    cout<<"The resultant vector  is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}