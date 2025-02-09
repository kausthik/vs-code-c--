#include<iostream>
#include<array>
using namespace std;
void print(int row,int col,string s){
    if(row<1 || col<1) return;
    if(row==1 && col==1){
        cout<<s;
        cout<<endl;
       return;
       
    } 
    print(row-1,col,s+'D');
    print(row,col-1,s+'R');
}

int main(){
    int row,col;
    cout<<"enter the values : ";
    cin>>row>>col;
     cout<<"the ways are : "<<endl;
 print(row,col,"");
    
}