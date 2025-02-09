#include<iostream>
using namespace std;
// Given a positive integer, return true if it is a power of 2.
void powerof2(int n){
    if(n==1) {
    cout<<"true";
    return;
   }
   if(n%2!=0) return;
   powerof2(n/2);
}
int main(){
    int n;
    cout<<"enter the integer n : ";
    cin>>n;
    powerof2(n);
}