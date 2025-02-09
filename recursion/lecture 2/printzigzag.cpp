#include<iostream>
#include<array>
using namespace std;
// print the zig zag
void zigzag(int n){
     if(n==0) return;
     cout<<n;
     zigzag(n-1);
     cout<<n;
     zigzag(n-1);
     cout<<n;
     
}
int main(){
    int n;
    cout<<"enter the number n : " ;
    cin>>n;
    zigzag(n);
    
}