#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else if(ch == '^') return 3;
    else return 2;
}
 int solve(int val1, int val2 ,char ch){
    if(ch=='+') return val1+val2;
     if(ch=='-') return val1-val2;
      if(ch=='*') return val1*val2;
       if(ch=='/') return val1/val2;
       return 0;
}
int main(){
    stack<int> value;
    stack<char> oper;
    string s="2+6*4/8-3";
    
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57) value.push(s[i]-48);   // push
       else if(oper.size()==0 || priority(s[i])> priority(oper.top())){   //push
             oper.push(s[i]);
       }
       else{ 
         while(oper.size()>0 && priority(s[i]) <= priority(oper.top())){            // work  
          int val2=value.top();
          value.pop();
          int val1=value.top();
          value.pop();
          char op =oper.top();
          oper.pop();
          int result=solve(val1 , val2 ,op);
          value.push(result);
       }
       oper.push(s[i]);
       }
    }
    while(oper.size()>0){
       int val2=value.top();
          value.pop();
          int val1=value.top();
          value.pop();
          char op =oper.top();
          oper.pop();
          int result=solve(val1 , val2 ,op);
          value.push(result);
    }
   cout<<"THE FINAL RESULT IS : "<<endl;
   cout<<value.top();
}