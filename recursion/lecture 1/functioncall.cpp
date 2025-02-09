#include<iostream>
using namespace std;
void call(int n){
    if(n==0) return;
    cout<<"good morning"<<endl;
    call(n-1);
}
int main(){
    int n;
    cout<<"enter the number n : ";
    cin>>n;
    call(n);
}