#include<iostream>
using namespace std;
//first non repeating element in an given array
int main(){
    int a[100],n;
    cout<<"enter the number of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(a[j]!=a[i]){
              k=k+1;
            }
        }
        if(k==(n-1)){
            cout<<"the first non repeating element is "<<a[j];
            break;
        }
        k=0;
    }

}