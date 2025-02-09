#include<iostream>
using namespace std;
void print(int arr[],int n,int k,int ini ){
    if(ini>n) return;
    int p=(n+ini)/2;
    if(arr[p]==k) {
        cout<<p;
        return;
    }
    if(arr[p]>k) print(arr,p-1,k,ini);
    else print(arr,n,k,p+1);
  }
int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
   int arr[n];
   cout<<"input the array : ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int k;
   cout<<"enter the targeted element : ";
   cin>>k;
   print(arr,n-1,k,0);


}