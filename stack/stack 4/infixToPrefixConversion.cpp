#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch == '^') return 3;
    else return 2;
}
string solve(string val1 , string val2 , char ch){
        return "ch"+val1+val2;
}
int main(){
    stack<char> op;
    stack<string> val;
    string s="2+6*4/8-3";
   for(int i=0;i<s.length();i++){
       if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i])); 
       else{
        if(op.size()==0 || priority(s[i])>priority(op.top())) op.push(s[i]);
        else {
            while(op.size()>0 && priority(s[i])<=priority(op.top())){
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                string result = solve(val1, val2, ch);
                val.push(result);
            }
        }
       }
    }
     while(op.size()>0){
                string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
                char ch = op.top();
                op.pop();
                string result = solve(val1, val2, ch);
                val.push(result);
            }

    cout<<val.top();
    
}
