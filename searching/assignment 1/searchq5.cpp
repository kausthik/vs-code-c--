#include<iostream>
#include<array>
using namespace std;
// valid square root or not
int main(){
    int n;
    cout<<"enter the checking number : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i;
    }
    bool flag = true;
    if(n==1) cout<<"yes";
    else{
        int low=0;
        int high=n-1;
        while(high>=low){
            int p=low+(high-low)/2;
            int k=arr[p]*arr[p];
            if(k==n) {
                flag = false;
                cout<<"yes";
                break;
            }
            else if(k>n) high=p-1;
            else low=p+1;
        }
         if(flag==true) cout<<"no";
    }
   
}