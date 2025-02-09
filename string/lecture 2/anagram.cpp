#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s,m;
   getline(cin,s);
   getline(cin,m);
   sort(s.begin(),s.end());
   sort(m.begin(),m.end());
 if (s==m) cout<<"yes"<<endl;
 else cout<<"no";
}