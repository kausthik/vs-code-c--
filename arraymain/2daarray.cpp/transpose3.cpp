#include<iostream>
using namespace std;
// change to transpose of its given matrix without using 
// another matrix.
int main(){
    int n;
    cout<<"enter the rows and columns : ";
    cout<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the matrix : ";
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
    int temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
            }
        }
     }
     cout<<"the resultant matrix is : ";
     cout<<endl;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
      }

}