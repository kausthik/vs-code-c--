#include<iostream>
using namespace std;
// brute force
int main(){
    int arr[]={5,1,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
            cout<<arr[i]<<" "<<arr[j];
            cout<<endl;
           }
        }
    }
    
}