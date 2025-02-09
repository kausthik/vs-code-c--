#include<iostream>
using namespace std;
// this code is for unique elements in subset
void csum(int arr[],int n,vector<int> v,int ini,int tar){
    if(ini==n){
        int sum=0;
       for(int i=0;i<v.size();i++){
          sum=sum+v[i];
       }
       if(sum==tar){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
       }
       cout<<endl;
    }
    return;
    }
   int k =arr[ini];
   csum(arr,n,v,ini+1,tar);
   v.push_back(k);
   csum(arr,n,v,ini+1,tar);
}  
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int tar;
    cout<<"enter the targeted value : ";
    cin>>tar;
    cout<<"the subsets is "<<endl;
    csum(arr,n,v,0,tar);
}