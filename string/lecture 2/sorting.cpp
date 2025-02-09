#include<iostream>
#include<string>
// sorting using inbuild string function
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // this sorting is done on the basis of ascii value
    sort(s.begin(),s.end());
    cout<<s;
}