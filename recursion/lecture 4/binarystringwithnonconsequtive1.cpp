#include<iostream>
using namespace std;
void binary(string ans,int n){
    if(ans.length()==n){
        cout<<ans;
        cout<<endl;
        return;
    }
   binary(ans+'0',n);
   if(ans.length()==0 || ans[ans.length()-1]=='0'  ) binary(ans+'1',n);
  }
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    binary("",n);
}