#include<iostream>
#include<array>
using namespace std;
int main(){
    int n;
    int i;
    cout<<"enter the number of elements : "<<endl;
    cin>>n;
     int arr[n];
    cout<<"enter the array : "<<endl;
    for( i=0;i<n;i++){
        cin>>arr[i];
    } 
    i=0;
    while(i<=n){
        if(arr[i]==(i+1)) i++;
      else{
         swap(arr[i],arr[arr[i]-1]);
        i++;
      }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}