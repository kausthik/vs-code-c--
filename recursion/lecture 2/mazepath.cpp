#include<iostream>
using namespace std;
int mazepath(int row,int col){
    if(row==1 || col==1) return 1;
    return mazepath(row-1,col)+mazepath(row,col-1);
}
int main(){
    int row,col;
    cout<<"enter row and col : "<<endl;
    cin>>row>>col;
   cout<< mazepath(row,col);
}