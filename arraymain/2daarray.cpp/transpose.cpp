#include<iostream>
using namespace std;
// transpose of the matrix
int main(){
    int m[100][100],t[100][100];
    int row,col,i,j;
    cout<<"enter the rows : ";
    cin>>row;
    cout<<"enter the coloumn : ";
    cin>>col;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>m[i][j];
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            t[i][j]=m[j][i];
        }
    }
    cout<<"the transpose is ";
    cout<<endl;
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}
