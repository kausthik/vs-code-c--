#include<iostream>
using namespace std;
// algorihtm of prefix sum
void prefixsum(int arr[],int n){
 for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
     }
}
void parition(int arr[],int n){
    bool flag=false;
    for(int i=1;i<n;i++){
    if(2*arr[i]==arr[n-1]){
        flag=true;
        cout<<"yes it can be parition "<<endl;
        cout<<"The index is from 0 to "<<i<<" and "<<i+1<<" to "<<n-1;
        cout<<endl;
    }
    }
    if(flag==false) cout<<flag;
}
int main(){
     int arr[]={1,2,3,4,5,10,5}; // prefix sum--> 1,5,7,13,18,27,34 ...
     int n=sizeof(arr)/sizeof(arr[0]);
     prefixsum(arr,n);
     parition(arr,n);
}