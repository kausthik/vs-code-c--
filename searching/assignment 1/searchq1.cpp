#include<iostream>
using namespace std;
// last occurence
int main(){
   int arr[]={1,2,3,3,4,4,4,5};
   int n=sizeof(arr)/sizeof(arr[0]);
   int tar=4;
   int low=0;
   int high=n-1;
   while(high>=low){
      int p=low+(high-low)/2;
      if(arr[p]==tar){
        if(arr[p]==arr[p+1]) low=p+1;
        else {
            cout<<p;
            break;
        }
      }
      else if(arr[p]>tar) high=p+1;
      else low=p-1;
   }
}