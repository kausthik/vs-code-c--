#include<iostream>
using namespace std;
int maxidx=-1;
int Maxsum(int arr[], int size, int k){
     int sum=INT32_MIN;
     int total;
     for(int i=0;i<(size-k+1);i++){
        total=0;
        for(int j=i;j<i+k;j++){
            total=total+arr[j];
        }
        if(total>sum) {
            sum=total;
            maxidx=i;
        }
     }
     return sum;
}
int main(){
    int k;
    cout<<"enter the subarray size "<<endl;
    cin>>k;
    int arr[]={7,1,2,5,8,4,9,3,6};
    int size=sizeof(arr)/sizeof(arr[0]);
   int sum= Maxsum(arr,size,k);
   cout<<"THE MAXIMUM SUM IS"<<endl;
   cout<<sum<<endl;
   cout<<"MAX IDX IS"<<endl;
   cout<<maxidx;
}