#include<iostream> 
#include<vector>   
using namespace std;

// Define the binarysearch class
class binarysearch {
private:
    vector<int> v; // Private member variable to store the vector of integers
    int idx;       // Private member variable to store the index of the search result

public:
    // Method to set the vector elements
    void setv() {
        int n;
        cout << "Enter the size of the vector: " << endl;
        cin >> n;
        cout << "Enter the elements: " << endl;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            this->v.push_back(x);
        }
    }

    // Method to perform binary search and set the index
    void setidx(int item) {
        int n = this->v.size() - 1;
        int i = 0;
        int j = n;
        bool flag = false;

        while (j >= i) {
            int p = (i + j) / 2; // Calculate the mid index

            if (this->v[p] == item) { // Check if item is at mid index
                this->idx = p;
                flag = true;
                break;
            } else if (this->v[p] > item) { // Adjust the search range
                j = p - 1;
            } else {
                i = p + 1;
            }
        }

        if (flag == false) {
            this->idx = -1; // Set idx to -1 if item is not found
        }
    }

    // Method to get the index of the search result
    int getidx() {
        return idx;
    }
};

int main() {
    binarysearch binary; // Create an instance of the binarysearch class

    // Set the vector elements
    binary.setv();

    int item;
    cout << "Enter the item: " << endl;
    cin >> item;

    // Perform binary search to find the index of the item
    binary.setidx(item);

    // Print the index of the item (or -1 if not found)
    cout << binary.getidx() << endl;

    return 0; // Return 0 to indicate successful execution
}
