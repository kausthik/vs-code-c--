#include<iostream>
using namespace std;
// euclid division algorithm
// time complexity of hcf(a,b) is log(a+b)
int  hcf(int big,int small){
   if(big%small==0) cout<<small;
 else return hcf(small,big%small);
 return 0;
}
int main(){
    int n,m;
    cout<<"enter the numbers for hcf : "<<endl;
    cin>>n>>m;
    cout<<"the highest common factor is "<<endl;
    hcf(n,m);
}