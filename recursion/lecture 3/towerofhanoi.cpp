#include<iostream>
using namespace std;
// source --> s , destination --> d , helper --> h
void hanoi(int n,char a,char b,char c){
    // 1
  if(n==0) return;
    // 2
  hanoi(n-1,a,c,b);
    // 3
  cout<<a<<" -> "<<c<<endl;
   // 4
  hanoi(n-1,b,a,c);
}
int main(){
    int n=3;
    // cout<<"enter the number of disks : ";
    // cin>>n;
   hanoi(n,'A','B','C');
}