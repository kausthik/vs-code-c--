#include<iostream>
using namespace std;
void printmax(int arr[],int n,int max){
    if(n<0) { 
        cout<<max;
        return;
    }
    else {
        if(arr[n]>max) max=arr[n];
        printmax(arr,n-1,max);
    }

}
int main(){
  int arr[]={6,9,3,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int max=INT_MIN;
  printmax(arr,n-1,max);
}
