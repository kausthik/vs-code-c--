#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==1) return a;
     if(b%2!=0) return power(a,b/2)*power(a,b/2)*a;
     else return power(a,b/2)*power(a,b/2);
}
int main(){
   int a,b;
   cout<<"enter the base : ";
   cin>>a;
   cout<<endl;
   cout<<"enter the power : "<<endl;
   cin>>b;
   cout<<power(a,b);
}