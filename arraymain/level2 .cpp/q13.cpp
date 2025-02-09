#include<iostream>
#include<vector>
using namespace std;
// Find the factorial of a large number
// wrong
int main(){
    int fac;
    cout<<"enter the number for factorial ";
    cin>>fac;
    cout<<endl;
    int sol=1;
    for(int i=fac;i>1;i--){
      sol=sol*i;
    }
    cout<<"the solution is "<<sol;

}