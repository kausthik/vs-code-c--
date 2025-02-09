#include<iostream>
using namespace std;

// modulo operator -> remainder operator for ex-> 13%4=1 13/4 remainder
// used when we deal with very large number like more than 32 bits

//Print factorial of first 25 natural numbers and modulo the result by 10°+7.


int main(){
    // (a+b)%c =( a%c + a%b )%c

    // cout<<(5+7)%11<<endl;
    // cout<<(5%11 + 7%11)%11<<endl;

    // (a*b)%c =( a%c * a%b )%c

    // cout<<(5*7)%11<<endl;
    // cout<<(5%11 * 7%11)%11<<endl;

     // (a-b)%c =( a%c - a%b + c)%c

    // cout<<(7-5)%11<<endl;
    // cout<<(7%11 - 5%11 + 11)%11<<endl;

   int fact[26];
   int mod=1000000007;
   fact[1]=1;
   for(int i=2;i<=25;i++){
      fact[i]=(fact[i-1]%mod * i%mod)%mod;
   }

   for(int i=1;i<=25;i++){
      cout<<fact[i]<<endl;
   }


}