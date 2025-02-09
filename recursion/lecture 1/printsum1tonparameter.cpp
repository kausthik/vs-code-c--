#include<iostream>
using namespace std;
void print(int sum,int n){
    // base case
  if(n==0) {
    cout<<sum;
    return ;  
  }
  print(sum+n,n-1);

}
int main(){
    int n,sum=0;
    cout<<"enter the integer n : ";
    cin>>n;
    print(sum,n);
}