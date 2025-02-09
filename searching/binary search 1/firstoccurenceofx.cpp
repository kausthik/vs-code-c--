#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    int x;
    cout<<"enter the targeted element : ";
    cin>>x;
    while(high>=low){
        int p=low+(high-low)/2;
        if(arr[p]==x){
            if(arr[p]==arr[p-1]){
              high=p-1;
            }
            else {
                cout<<"the index is "<<p;
                break;
                }
        }
        else if(arr[p]>x) high=p-1;
        else low=p+1;
    }
}