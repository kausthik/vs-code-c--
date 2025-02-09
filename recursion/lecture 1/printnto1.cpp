#include<iostream>
using namespace std;
void print(int n){
    cout<<n<<endl;
    // base case
    if(n==1) return;
    print(n-1);
    return;
}
int main(){
    int n;
    cout<<"enter the integer n : ";
    cin>>n;
    print(n);
}