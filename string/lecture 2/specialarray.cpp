#include<iostream>
#include<vector>
using namespace std;
// character more time question 2nd method
int main(){
    string s="leetcode";
    vector<int> v(26,0);
    for(int i=0;i<s.length();i++){
       int k = (int)s[i]-97;
       v[k]=v[k]+1;
    }
    int max=0;
    for(int i=0;i<26;i++){
      if(v[i]>max) max=v[i]; 
    }
    for(int i=0;i<26;i++){
        if(v[i]==max) cout<<char(i+97);
    }
}