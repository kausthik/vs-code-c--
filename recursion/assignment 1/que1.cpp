#include<iostream>
using namespace std;
// sum of odd number between a and b 
int sum(int a,int b){
    if(a==b) return b;
    return a+sum(a+2,b);
}
int main(){
   int a,b;
   cout<<"enter the number a and b : ";
   cout<<endl;
   cin>>a>>b;
   if(a%2==0) a++;
   if(b%2==0) b--;
   if(a!=b) cout<<sum(a,b);
   else cout<<"no answer";
}