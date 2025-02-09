#include<iostream>
#include<vector>
using namespace std;
int binary(int low,int high,int tar,int arr[]){
  while(high>=low){
   int p=low+(high-low)/2;
   if(arr[p]==tar) {
    cout<<p;
    break;
   }
   else if(arr[p]>tar) high=p-1;
   else low=p+1;
  }
  return 0;
}

int main(){
   int arr[]={1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int low=0;
  int high=n-1;
  int store=-1;
  int tar;
  cout<<"enter the targeted value : ";
  cin>>tar;
  while(high>=low){
    int p=low+(high-low)/2;
    if(arr[p]<arr[p+1] && arr[p]<arr[p-1]){
        store=p;
        break;
    }
    if(arr[p]>arr[p+1] && arr[p]>arr[p-1]){
        store=p+1;
        break;
    }
    if(arr[p]<arr[p+1] && arr[p]>arr[p-1] && arr[p]>arr[n-1]){
        low=p+1;
    }
    else high=p-1;
  }
  if(tar>arr[n-1]) binary(0,store-1,tar,arr);
  else binary(store,n-1,tar,arr);

  }
  