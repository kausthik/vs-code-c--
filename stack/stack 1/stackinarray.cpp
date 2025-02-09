#include <iostream>
using namespace std;

// Define the stack class
class stack {
public: 
    int arr[5]; // Array to hold stack elements, maximum size is 5
    int top;    // Index of the top element in the stack

    // Constructor to initialize the stack
    stack() {
        top = -1; // Initialize top to -1, indicating the stack is empty
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top == 4) { // Check if the stack is full
            cout << "overflow" << endl;
            return; // Exit the function if the stack is full
        } else {
            top++;         // Increment the top index
            arr[top] = value; // Add the new value to the top of the stack
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) { // Check if the stack is empty
            cout << "underflow" << endl;
        } else {
            top--; // Decrement the top index to remove the top element
        }
    }

    // Function to print the top element of the stack
    void Top() {
        if (top == -1) { // Check if the stack is empty
            cout << "underflow" << endl;
        } else {
            cout << arr[top] << endl; // Print the top element
        }
    }

    // Function to return the size of the stack
    int size() {
        return top + 1; // Size is the top index plus one
    }
};

int main() {
    stack st; // Create a stack object

    // Push elements onto the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); // This should cause an overflow

    cout << "Current top element: ";
    st.Top(); // Print the top element

    cout << "Stack size: " << st.size() << endl; // Print the size of the stack

    // Pop elements from the stack
    st.pop();
    st.pop();

    cout << "Current top element after popping twice: ";
    st.Top(); // Print the top element after popping twice

    cout << "Stack size after popping: " << st.size() << endl; // Print the size of the stack after popping

    return 0; 
}
