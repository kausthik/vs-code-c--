#include<iostream>
using namespace std;
int maxidx=-1;
int slidingwindow(int arr[], int size , int k){
     int maxsum;
     int currsum=0;
     for(int i=0;i<k;i++){
         currsum=currsum+arr[i];
     }
     maxsum=currsum;
     int i=0;
     int j=k;
     while(j<size){
        currsum=currsum-arr[i]+arr[j];
        if(currsum>maxsum) {
            maxsum=currsum;
            maxidx=i+1;
        }
        i++;
        j++;

     }
     return maxsum;

}
int main(){
    int k;
    cout<<"enter the subarray size "<<endl;
    cin>>k;
    int arr[]={7,1,2,5,8,4,9,3,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans[size-k+1];
    int sum=slidingwindow(arr,size,k);
   cout<<"THE MAXIMUM SUM IS "<<sum<<" AND THE INDEX IS "<<maxidx;
   
}