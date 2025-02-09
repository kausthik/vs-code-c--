#include<iostream>
#include<vector>
using namespace std;
// binary search algorithm
int main(){
   int arr[]={1,1,2,2,2,2,3,3};
   int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"enter the finding lowerbound number : "<<endl;
    cin>>x;
    int low=0;
    int high=(n-1);
   // algorithm for lower bound 
   // for upper bound print low
  while(low<=high){
    int p=low+(high-low)/2;
    if(arr[p]==x) cout<<"the lower bound is "<<arr[p-1];
    else if(arr[p]>x) high=p-1;
    else low=p+1;
   }
   cout<<arr[high];
}