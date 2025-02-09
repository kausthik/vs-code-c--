#include<iostream>
using namespace std;
void binary(string ans,int n){
    if(n==0){
        cout<<ans;
        cout<<endl;
        return;
    }
   binary(ans+'0',n-1);
   binary(ans+'1',n-1);
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    binary("",n);
}