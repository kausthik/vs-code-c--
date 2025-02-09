#include<iostream>
using namespace std;
// khatarnak method
int steps(int sta){
    if(sta==1 || sta ==2) return sta;
    int ans=steps(sta-1)+steps(sta-2);
    return ans;
}
int main(){
    int sta;
    cout<<"enter the number of stairs : ";
    cin>>sta;
    cout<<steps(sta);
}
