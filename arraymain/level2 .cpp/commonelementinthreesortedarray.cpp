#include<iostream>
using namespace std;
 int sort(int a[],int n){
    for(int j=0;j<n;j++){
     for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            int temp = a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
     }
    }
 }
 int input(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 }

int main(){
    int a[100],b[100],c[100],d[100];
    int n;
    cout<<"enter the number of element ";
    cin>>n;
    input(a,n);
    input(b,n);
    input(c,n);
    sort(a,n);
    sort(b,n);
    sort(c,n);
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
       if(a[j]==b[i]){
           
       }
    }
    }
    
    
}