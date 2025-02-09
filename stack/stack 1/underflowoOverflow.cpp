#include<iostream>
#include<stack>
using namespace std;
// overflow : if size of the stack is full
//underflow : no element present 
int main(){
    stack<int> st;
    st.push(80);
    st.pop();
    cout<<st.top();
}