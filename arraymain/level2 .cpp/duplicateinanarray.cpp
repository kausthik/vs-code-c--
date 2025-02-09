//Given an array a of size N which contains elements from 0 to N-1, 
//you need to find all the elements occurring more than once 
//in the given array. Return the answer in ascending order. 
//If no such element is found, return list containing [-1]. 
#include<iostream>
using namespace std;
int main(){
     int a[100],n;
     cout<<"enter the number of element in the array ";
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int k=0;
     for(int j=0;j<n;j++){
     for(int i=j;i<n;i++){
      if(a[j]==a[i] && a[j]!=0){
        k=k+1;  
     }
     }
     if(k>1){
     cout<<"the duplicate number is "<<a[j]<<"repeat "<<k<<" times. ";
     cout<<endl;
     }
     if(k>1){
        int temp =a[j];
        for(int i=0;i<n;i++){
         if (a[i]==temp && i>j){
            a[i]=0;
         }
        }
     }
        
     k=0;

}
}

