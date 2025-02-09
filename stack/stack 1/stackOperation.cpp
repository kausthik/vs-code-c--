#include <iostream>
#include <stack>
using namespace std;
// we do some operations of stack
//  stack data structure push , pop and top operation for ex st.top()
int main()
{
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);         
    st.push(50);

// print the stack while storing in another stack
    while(st.size()>0){
        cout<<st.top()<<endl;
        int x=st.top();
        st.pop();
        temp.push(x);
    }
// get elements back to older stack
    while(temp.size()>0){
       int x=temp.top();
       temp.pop();
       st.push(x);
       cout<<st.top()<<" ";
    }
    
}