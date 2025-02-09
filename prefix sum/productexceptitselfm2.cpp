#include<iostream>
#include<vector>
using namespace std;
// leetcode 238
// Product of array except self
void presuf(vector<int>& v,vector<int>& pre,vector<int>& suf){
    int n=v.size();
    suf[n-1]=v[n-1];
    pre[0]=v[0];
   for(int i=(n-2);i>=0;i--){
    suf[i]=v[i]*suf[i+1];
   }
   for(int i=1;i<n;i++){
      pre[i]=v[i]*pre[i-1];
   }
}
void ans(vector<int>& v,vector<int>& pre,vector<int>& suf){
    int n=v.size();
    // for first element 
      v[0]=suf[1];
    // for last element 
      v[n-1]=pre[n-2];
    // for middle elements
     for(int i=1;i<(n-1);i++){
        v[i]=pre[i-1]*suf[i+1];
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
    ans(v,pre,suf);

    cout<<"The resultant vector  is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}