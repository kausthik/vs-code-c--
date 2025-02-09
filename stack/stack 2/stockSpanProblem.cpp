  #include<iostream>
#include<stack>
using namespace std;

// Function to solve the stock span problem
void stockspanproblem(int arr[], int size) {
    int ans[size];  // Array to store the span of stocks
    int store[size];  // Temporary array to store elements popped from the stack
    int k;  // Variable to store the count of days the stock price was less than or equal to the current day
    stack<int> st;  // Stack to store the indices of the stock prices
    int i = 0;  // Initialize the index
    int s;  // Variable to store the number of elements popped from the stack

    ans[i] = 1;  // Span of the first day is always 1
    st.push(arr[i]);  // Push the first element onto the stack
    i++;  // Move to the next element

    while (i < size) {
        k = 1; s = 0;  // Initialize k to 1 and s to 0 for each element
        while (!st.empty() && st.top() < arr[i]) {  // Check if the stack is not empty and the top of the stack is less than the current element
            store[s] = st.top();  // Store the top of the stack in the temporary array
            s++;  // Increment the count of elements popped
            st.pop();  // Pop the top of the stack
            k++;  // Increment the count of days
        }
        for (int j = s - 1; j >= 0; j--) {  // Push the popped elements back onto the stack
            st.push(store[j]);
        }
        ans[i] = k;  // Store the count in the answer array
        st.push(arr[i]);  // Push the current element onto the stack
        i++;  // Move to the next element
    }

    // Print the answer array
    cout << "ANSWER ARRAY IS " << endl;
    for (int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int size = sizeof(arr) / sizeof(arr[0]);
    stockspanproblem(arr, size);
    return 0;
}
