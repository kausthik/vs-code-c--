 #include<iostream>
using namespace std;
// column wise printing
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
    for(int j=0;j<col;j++){
         if(j%2==0){
          for(int i=0;i<row;i++){
            cout<<a[i][j]<<" ";
          }
         }
         else{
          for(int i=(row-1);i>=0;i--){
            cout<<a[i][j]<<" ";
          }
         }
    }
}