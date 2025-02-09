#include<iostream>
#include<string>
using namespace std;
void parenthesis(string ans,int n,int open,int close){
    // base base
    if(close==n){
        cout<<ans<<endl;
        return;
    }
     if(open<n)parenthesis(ans+"(",n,open+1,close);
    if(open>close) parenthesis(ans+")",n,open,close+1);
    }
int main(){
    int n;
    cout<<"enter the number of parenthesis : "<<endl;
    cin>>n;
  parenthesis("",n,0,0);
 
}