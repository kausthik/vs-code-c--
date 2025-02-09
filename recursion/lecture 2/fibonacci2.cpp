#include<iostream>
using namespace std;
int fibo(int n){
    if (n==1 || n==2) return 1;  // base
   int leftans = fibo(n-1); // call and return
   int rightans = fibo(n-2);
   return leftans + rightans ;
}
int main(){
    cout<<fibo(7); // 1 1 2 3 5 8 13 21
}