#include<iostream>
using namespace std;
// int count(int a[], int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(a[i]!=0){
//        sum =sum+1;
//     }
// }
//      return sum;
// }
//Rearrange the array in alternating positive and negative items
int main(){
    int a[100],n,b[100],c[100];
    cout<<"enter the number of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=0;
    int k=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            b[m]=a[i];
            m++;
        }
        else{
            c[k]=a[i];
            k++;
        }
    }
    m=0;
    k=0;
    for(int i=0;i<n;i++){
       if(i%2==0){
         a[i]=b[m];
         m++;
       }
       else{
            a[i]=c[k];
            k++;
       }
    }
   
    
}
