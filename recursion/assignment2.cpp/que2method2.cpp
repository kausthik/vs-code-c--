#include<iostream>
using namespace std;
void print(int arr[],int k,int n,int ini){
    if(ini>n-1){
        cout<<-1;
        return;
    }
    if(arr[ini]==k){
        cout<<ini;
        return;
    }
    print(arr,k,n,ini+1);
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
   print(arr,k,n,0);


}