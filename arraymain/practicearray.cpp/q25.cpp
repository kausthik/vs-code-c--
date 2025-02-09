#include<iostream>
#include<vector>
// print in spiral form
using namespace std;
int main(){
    int a[100][100];
    int row,col;
    int i,j;
    cout<<"enter the size of row ";
    cin>>row;
    cout<<"enter the size of column ";
    cin>>col;
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    cout<<a[i][j];
}