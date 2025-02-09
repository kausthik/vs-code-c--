#include<iostream>
using namespace std;
float findmean(float arr[],int n){
   if(n==1) return arr[n-1];
   else return (arr[n-1] + findmean(arr,n-1)*(n-1) ) / n; 
}
int main(){
    float arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findmean(arr,n);
}