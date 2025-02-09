#include<iostream>
using namespace std;
void bhai(int f,int k){
  cout<<f<<endl;
   if(f==1) return;
   f=f/k;
   bhai(f, k-1);
}
void fact(int n,int f,int k){
  if(n==1){
   bhai(f,k);
   return;
  }
  f=f*n;
  fact(n-1,f,k);
}

int main(){
    int n,f=1;
    cout<<"enter the number for factorial : ";
    cin>>n;
    int k=n;
    fact(n,f,k);
}