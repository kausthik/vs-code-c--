#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the row : ";
    cin>>row;
    cout<<"enter the column : ";
    cin>>col;
    cout<<"enter the matrix : ";
    cout<<endl;
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    //firstly i want to make one of our first column
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][0]==0){
                if(a[i][j]==0) a[i][j]=1;
                else a[i][j]=0;
            }
        }
    }
    // now count the number of zero int the column 
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<row;i++){
           if(a[i][j]==0){
             sum++;
             if(sum>(row/2)) {
                for(int i=0;i<row;i++){
                    if(a[i][j]==0) a[i][j]=1;
                    else a[i][j]=0;
                    break;
                }
             }
           }
        }
    }
    cout<<"the final matrix is : ";
    cout<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }

    int tsum=0;
    // we want to find the sum
    for(int i=0;i<row;i++){
        int n=1;
        int sum=0;
        for(int j=(col-1);j>=0;j--){
            sum = sum + a[i][j]*n;
            n=2*n;
        }
        tsum=tsum+sum; 
    }
    cout<<"the maximum sum is : ";
    cout<<tsum;
}