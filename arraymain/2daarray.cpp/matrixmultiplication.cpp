#include<iostream>
using namespace std;
int main(){
    int row1,col1;
    cout<<"rows in first matrix : ";
    cin>>row1;
    cout<<"col in first matrix : ";
    cin>>col1;
    int row2,col2;
    cout<<"rows in second matrix : ";
    cin>>row2;
    cout<<"col in second matrix : ";
    cin>>col2;
    if(col1 == row2 ){
    int a[row1][col1] , b[row2][col2] ,m[row1][col2];
    cout<<"The first matrix is : ";
    cout<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The second matrix is : ";
    cout<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>b[i][j];
        }
    }
    int sum =0;
    int p;
     for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            sum=0;
            for(p=0;p<col1;p++){
         sum= sum + a[i][p]*b[p][j];
         m[i][j]=sum;
        }
    }
    }
    cout<<"The resultant matrix is : ";
    cout<<endl;
     for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
         cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
    }
    else cout<<"bhai dhyan se ";


}