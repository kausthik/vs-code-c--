#include<iostream>
#include<string>
using namespace std;
int main(){
    int x=1234567;
    string s = to_string(x);
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }

}