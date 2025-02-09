#include<iostream>
#include<array>
using namespace std;
void print(int row,int col,int endr,int endc,string s){
    if(row>endr || col>endc) return;
    if(row==endr && col==endc){
        cout<<s;
        cout<<endl;
       return;
       
    } 
    print(row+1,col,endr,endc,s+'D');
    print(row,col+1,endr,endc,s+'R');
}

int main(){
    int row=1,col=1,endr,endc;
    cout<<"enter the values : ";
    cin>>endr>>endc;
     cout<<"the ways are : "<<endl;
 print(row,col,endr,endc,"");
    
}
