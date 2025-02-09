#include<iostream>     
#include<stack>       
using namespace std; 

// Function to push an element to the bottom of the stack

void pushatbottom(stack<int>& st, int x) {
    // Base case: If the stack is empty, push the element
    if(st.size() < 1) {
        st.push(x);
        return;
    }
    // Recursive case: Remove the top element and push it after inserting the new element at the bottom
    int k = st.top();  // Store the top element
    st.pop();          // Remove the top element
    pushatbottom(st, x); // Recursive call to push the element at the bottom
    st.push(k);        // Push the stored element back on top
}

// Function to reverse the stack using recursion
void Reverse2(stack<int>& st) {
    // Base case: If the stack is empty, do nothing
    if(st.size() < 1) return;
    
    // Recursive case: Remove the top element and reverse the remaining stack
    int k = st.top();  // Store the top element
    st.pop();          // Remove the top element
    Reverse2(st);      // Recursive call to reverse the remaining stack
    
    // After reversing the rest of the stack, push the stored element to the bottom
    pushatbottom(st, k);
}

int main() {
    stack<int> st; // Create a stack of integers

    // Push elements onto the stack
    st.push(30);
    st.push(20);
    st.push(10);

    // Reverse the stack
    Reverse2(st);

    // Print the top element of the reversed stack
    cout << st.top();

    return 0; 
}
