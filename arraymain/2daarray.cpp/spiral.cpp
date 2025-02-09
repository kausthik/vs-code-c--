#include<iostream>
using namespace std;
// leet code 54--> spiral printing
// important question
int main(){
    int row,col,p;
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the column : ";
    cin>>col;
    int a[row][col];
    cout<<"enter the matrix : ";
    cout<<endl;
    if(row%2==0) p=row/2;
    else p=row/2+1;


    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          cin>>a[i][j];
        }
    }
    int r=0,d=(col-1),l=(row-1),u=0;
    for(int k=1;k<=p;k++){
    for(int j=r;j<col;j++){
        cout<<a[r][j]<<" ";
    }
    r++;
    for(int i=r;i<row;i++){
        cout<<a[i][d]<<" ";
    }
    d--;
    for(int j=d;j>=u;j--){
        cout<<a[l][j]<<" ";
    }
    l--;
    for(int i=l;i>=r;i--){
        cout<<a[i][u]<<" ";
    }
    u++;
    row--;
    col--;
}
}