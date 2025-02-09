#include<iostream>
using namespace std;
int  fact(int n){
    // base case
    if(n==1 || n==0) return 1;
  return n*fact(n-1);
}
int main(){
   int n;
   cout<<"enter the integer n : ";
   cin>>n;
   cout<<fact(n);
} 