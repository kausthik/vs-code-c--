#include<iostream>
using namespace std;
// rotate an array by 90 degree

// function for swapping
// void swap(int n,int a[n][n]){
//     for(int k=0;k<n;k++){
//         int i=0;
//         int j=n-1;
//         while(j>i){
//             int temp=a[k][i];
//             a[k][i]=a[k][j];
//             a[k][j]=temp;
//             i++;
//             j--;
//         }
//     }
// }
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
    // first step is to take the transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i){
    int temp=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=temp;
            }
        }
     }
     // second step is to reverse the columns
     // for reverse
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
     if(j<(n/2)){
     int temp=a[i][j];
    a[i][j]=a[i][n-j-1];
    a[i][n-j-1]=temp;
}
}
}
cout<<"the rotated array is :";
cout<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
}