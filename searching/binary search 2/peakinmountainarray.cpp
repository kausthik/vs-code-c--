#include<iostream>
#include<array>
// leetcode 852
using namespace std;
// peak element in the mountain array
int main(){
   int arr[]={4,5,6,1,2,3,4};
   int n=sizeof(arr)/sizeof(arr[0]);
   int low=0;
   int high=n-1;
   while(high>=low){
    int p=low+(high-low)/2;
    if(arr[p]>arr[p-1] && arr[p]>arr[p+1]){
      cout<<"the index of peak element is : "<<p;
      break;
    }
    else if(arr[p]>arr[p-1]) low=p+1;
    else high=p-1;
   }
}