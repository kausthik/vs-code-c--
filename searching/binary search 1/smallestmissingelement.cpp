#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=(n-1),low=0;
    while(high>low){
        int p=low+(high-low)/2;
        if((arr[p]-arr[0])==p){
            low=p+1;
        }
        else high=p;

    }
    cout<<arr[low-1]+1;
}