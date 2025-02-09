#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
      for(int z=0;z<n;z++){
       for(int i=z;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<arr[j];
        }
        cout<<endl;
       }
      }
    }

