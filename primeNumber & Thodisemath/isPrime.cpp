#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
     for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
     }
     return true;
}
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<isprime(n);
}