#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the column : ";
    cin>>col;
    int a[row][col];
    cout<<"enter the matrix : ";
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          cin>>a[i][j];
        }
    }
    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<col;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else {
            for(int j=2;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}