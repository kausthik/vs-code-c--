#include<iostream>
using namespace std;
// stair path 1,2,3
int steps(int sta){
    if(sta==1) return 1;
    if(sta==2) return 2;
    if(sta==3) return 4;
    int ans=steps(sta-1)+steps(sta-2)+steps(sta-3);
    return ans;
}
int main(){
    int sta;
    cout<<"enter the number of stairs : ";
    cin>>sta;
    cout<<steps(sta);
}
