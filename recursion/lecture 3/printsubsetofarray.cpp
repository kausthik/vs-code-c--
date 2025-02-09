#include<iostream>
#include<vector>
using namespace std;

// Function to generate all subsets of the given array
void subset(int arr[], vector<int> v, int n, int ini) {
    // Base case: if ini reaches n, print the current subset
    if (ini == n) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    
    // Store the current element
    int k = arr[ini];
   
    // First recursive call: excluding the current element
    subset(arr, v, n, ini + 1);
    
    // Include the current element in the subset
    v.push_back(k);
    
    // Second recursive call: including the current element
    subset(arr, v, n, ini + 1);
}

int main() {
    int arr[] = {1, 2, 3};
    vector<int> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Initial call to generate subsets
    subset(arr, v, n, 0);
    
    return 0;
}
