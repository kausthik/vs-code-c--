#include<iostream>     
#include<vector>       
using namespace std;   

// Define a custom stack class
class stack {
public:
    vector<int> v;   // Vector to store stack elements
    int top;         // Variable to keep track of the top element index

    // Constructor to initialize the stack
    stack() {
        top = -1;    // Initialize top to -1 indicating the stack is empty
    }

    // Function to push an element onto the stack
    void push(int value) {
        top++;             // Increment the top index
        v.push_back(value); // Add the value to the vector
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) {  // Check if the stack is empty
            cout << "underflow " << endl; // Print underflow message
        } else {
            top--;       // Decrement the top index to remove the top element
        }
    }

    // Function to print the top element of the stack
    void Top() {
        if (top == -1) {  // Check if the stack is empty
            cout << "underflow" << endl; // Print underflow message
        } else {
            cout << v[top] << endl; // Print the top element
        }
    }
};

int main() {
    stack st; // Create an instance of the custom stack class

    st.pop(); // Attempt to pop from an empty stack, should print "underflow"

    st.push(90);  // Push 90 onto the stack
    st.push(100); // Push 100 onto the stack
    st.push(10);  // Push 10 onto the stack

    st.Top(); // Print the top element, which should be 10

    st.pop(); // Pop the top element (10)
    st.pop(); // Pop the next top element (100)
    st.pop(); // Pop the next top element (90)

    st.Top(); // Attempt to print the top element of an empty stack, should print "underflow"

    return 0; 
}
