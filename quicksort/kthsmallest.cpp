#include<iostream>
using namespace std;
// find kth smallest element using quicksort
int parition(int arr[],int st,int end,int k){
    int pivot=arr[(st+end)/2];
    int sum=0;
       for(int i=st;i<=end;i++){
        if(i==(st+end)/2) continue;
          if(arr[i]<=pivot) sum++;
       }
       int pivotidx=sum+st;
       swap(arr[(st+end)/2],arr[pivotidx]);
    int i=st;
    int j=end;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivot) i++;
        if(arr[j]>pivot) j--;
        if(arr[i]>pivot && arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
   return pivotidx;

}
void quicksort(int arr[],int st,int end,int k){
     if(st>=end) return;
     int pi= parition(arr,st,end,k);
     if(pi==(k-1)){
        cout<<arr[pi];
        return; 
     }
     else if(pi+1 > k) return quicksort(arr,st,pi-1,k);
     else return quicksort(arr,pi+1,end,k);
}
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int k;
    cout<<"enter the kth element : ";
    cin>>k;
    int arr[n];
    cout<<"enter the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quicksort(arr,0,n-1,k);
}
