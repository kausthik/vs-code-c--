#include<iostream>
// let the sequence is ascending order
using namespace std;
int main(){
    int a[100],n,k=1,b[100],m=0;
    cout<<"Enter the number of elements in array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i<<"th element";
        cout<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i+1]>a[i]){
            k=k+1;
        }
        else{
           b[m]=k;
           m++;
           k=1;
        }
    }
    int gre =b[0];
    int kau =0;
    for(int i=0;i<m;i++){
        if(b[i]>gre){
            gre=b[i];
            kau=i;
        }
    }
    cout<<"the largest sequence is "<<endl;
    for(int i=0;i<n;i++){
        if(i>=kau && i<=(gre-1)){
            cout<<a[i]<<" ";
        }
    }

}