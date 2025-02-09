#include<iostream>
#include<stack>
using namespace std;
string Identify(string s){
     int size=s.size();
     if(size%2!=0) return "false";
     else{
     stack<char> open;
     int i=0;
     while(i<size){
        if(s[i]=='('){
           open.push('(');
        }
        else{
            if(open.size()<1) return "false" ;
            open.pop();
        }
        i++;
     }
     if(open.size()==0) return "true";
     else return "false";
}
}
int main(){
    string s;
    cout<<"enter the string "<<endl;
    cin>>s;
    cout<<Identify(s);
}