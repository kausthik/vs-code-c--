#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the column : ";
    cin>>col;
    //input the matrix
    cout<<"enter the matrix : ";
    cout<<endl;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    int tar;
    cout<<"enter the target number : ";
    cin>>tar;
    
    }

