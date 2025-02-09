#include<iostream>
using namespace std;
// row with max one's
//entries in boolean form
void sor(int i,int col,int a[100][100]){
    int m=0;
    int k=col-1;
    while(k>m){
    if(a[i][m]==0) m++;
    if(a[i][k]==1) k--;
    if(k>m) break;
    if(a[i][m]==1 && a[i][k]==0){
        a[i][m]=0;
        a[i][k]=1;
        m++;
        k--;
    }
}
}

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
        cout<<endl;
    }
    //for sorting
    for(int i=0;i<row;i++){
        sor(i,col,a);
    }
    int count=0;
    int max=count;
    int r=0;
    for( i=0;i<row;i++){
        for( j=0;j<col;j++){
            if(a[i][j]==1)  count++;
        }
        if(count>max){
        max=count;
        r=i;
        }
        count =0;
    }
    cout<<"Row "<<r<<" contains "<<max<<" one's";


}
