#include<iostream>
using namespace std;
int storemax(int arr[],int n,int ini){
    if(ini==n) return INT_MIN;
return max(arr[ini] , storemax(arr,n,ini+1) );
}
int main(){
  int arr[]={6,9,3,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int max=INT_MIN;
  cout<<storemax(arr,n-1,0);
}
