#include<iostream>
using namespace std;
int main(){
    int v,h;
    cout<<"enter the vertical length of character : ";
    cin>>v;
    cout<<"enter the horizontal length of character : ";
    cin>>h;
  for(int j=0;j<v;j++){
  for(int i=0;i<h;i++){
    if(i==(h-1) || j==0 || j==v/2 || i==0 ){
     cout<<'*'<<" ";
    }
  }
  cout<<endl;
  }
}