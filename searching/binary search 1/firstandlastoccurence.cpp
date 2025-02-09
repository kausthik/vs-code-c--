#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int x;
    cout<<"enter the targeted element : ";
    cin>>x;
    // for first occurence 
    while(high>=low){
        int p=low+(high-low)/2;
        if(arr[p]==x){
            if(arr[p]==arr[p-1]){
              high=p-1;
            }
            else {
                cout<<"the first occurence index is "<<p;
                break;
                }
        }
        else if(arr[p]>x) high=p-1;
        else low=p+1;
    }
     low=0;
    high=n-1;
     while(high>=low){
        int p=low+(high-low)/2;
        if(arr[p]==x){
            if(arr[p]==arr[p+1]){
              low=p+1;
            }
            else {
                cout<<"the last occurence index is "<<p;
                break;
                }
        }
        else if(arr[p]>x) high=p-1;
        else low=p+1;
    }
   
}