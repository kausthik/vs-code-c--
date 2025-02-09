#include<iostream>
using namespace std;
int main(){
    int a[100],n;
   cout<<"enter the number of element"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int k=a[n-1];
   for(int i=0;i<n;i++){
    if(i<=(n-2)){
    a[n-1-i]=a[n-2-i];
    }
   }
    a[0]=k;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   }

