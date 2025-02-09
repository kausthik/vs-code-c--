#include<iostream>
#include<vector>
#include<string>
// roman number to integer
using namespace std;
int main(){
    string s="IVXLCDM";
    vector<string> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s);
    }
    cout<<v[0][5];
   
}