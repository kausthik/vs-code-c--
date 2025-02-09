#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prior(char ch){
    if(ch =='*' || ch =='/') return 2;
    else return 1;
}

int solve(int val1 , int val2 , char ch){
    switch (ch){
    case ('+'):
        return val1 + val2;
    case ('-'):
        return val1 - val2;
    case ('*'):
        return val1 * val2;
    case ('/'):
        return val1 / val2;
    }
   return 0;
}
int main(){
    stack<int> val;
    stack<char> op;
    string s ="1+(2+6)*4/8-3";
    
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) val.push(s[i]-48);
        else{     // s[i]== character not a value
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int result=solve(val1, val2 , ch);
                    val.push(result);
                }
                op.pop();
            }
            else if(prior(s[i])>op.top()) op.push(s[i]);
            else{
                while(op.size()>0 &&  op.top()!=')' && prior(s[i])<=prior(op.top())){
                     int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int result=solve(val1, val2 , ch);
                    val.push(result);
                }
                op.push(s[i]);
            } 

        }
    }
    while(op.size()>0){
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
        int result = solve(val1, val2, ch);
        val.push(result);
    }
     cout<<"THE FINAL RESULT IS : "<<endl;
   cout<<val.top();
}


