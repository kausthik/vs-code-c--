#include<iostream>
using namespace std;
int print(int n){
    // base case
    if(n==1) return 1; 
   return n+print(n-1);
}
int main(){
    int n;
    cout<<"enter the integer n : ";
    cin>>n;
    cout<<print(n);
}