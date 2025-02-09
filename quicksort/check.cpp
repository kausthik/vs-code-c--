#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
     int pivot=4;
     int i=0;
      int j=n-1;
      while(j>3 && i<3){
        if(arr[i]<=pivot) i++;
        if(arr[j]>pivot) j--;
        if(arr[i]>pivot && arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
      }
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}
