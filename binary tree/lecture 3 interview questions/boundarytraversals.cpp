#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Define the Node class for the binary tree
class Node {
public:
    int val;
    Node* left;                                     
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to construct a binary tree from an array
Node* constructatree(int arr[], int size) {
    queue<Node*> que; // Queue for level order construction
    Node* root = new Node(arr[0]); // Root of the tree
    que.push(root); // Push the root to the queue

    int i = 1; // Index for the left child
    int j = 2; // Index for the right child
    Node* l;
    Node* r;

    while (!que.empty() && i < size) {
        Node* temp = que.front(); // Get the front node of the queue

        // Create left child if the value is not INT_MIN
        if (arr[i] != INT_MIN) l = new Node(arr[i]);
        else l = NULL;

        // Create right child if the value is not INT_MIN and within bounds
        if (arr[j] != INT_MIN && j < size) r = new Node(arr[j]);
        else r = NULL;

        // Attach left and right children to the current node
        temp->left = l;
        temp->right = r;
        
        que.pop(); // Remove the front node from the queue

        // Push the children to the queue if they are not NULL
        if (l != NULL) que.push(l);
        if (r != NULL) que.push(r);

        i += 2; // Move to the next set of children
        j += 2;
    }
    return root;
}

// Function to add leaf nodes to the boundary vector
void bottomboundary(Node* root, vector<int>& ans) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->val);
        return;
    }
    bottomboundary(root->left, ans);
    bottomboundary(root->right, ans);
}

// Function to add boundary nodes (excluding leaves) to the vector
void rightleftboundary(Node* root, vector<int>& ans) {
    Node* temp = root;
    
    // Add left boundary nodes
    while (temp->left != NULL || temp->right != NULL) {
        ans.push_back(temp->val);
        if (temp->left == NULL) temp = temp->right;
        else temp = temp->left;
    }
    
    // Add leaf nodes
    bottomboundary(root, ans);

    int n = ans.size();
    temp = root->right;
    
    // Add right boundary nodes in reverse order
    while (temp->left != NULL || temp->right != NULL) {
        ans.insert(ans.begin() + n, temp->val);
        if (temp->right == NULL) temp = temp->left;
        else temp = temp->right;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, INT_MIN, 6, 7, INT_MIN, 8, INT_MIN, 9, 10, INT_MIN, 11, INT_MIN, 12, INT_MIN, 13, INT_MIN, 14, 15, 16, INT_MIN, 17, INT_MIN, INT_MIN, 18, INT_MIN, 19, INT_MIN, INT_MIN, INT_MIN, 20, 21, 22, 23, INT_MIN, 24, 25, 26, 27, INT_MIN, INT_MIN, 28, INT_MIN, INT_MIN};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;

    // Construct the tree from the array
    Node* root = constructatree(arr, size);
    
    // Find and add boundary nodes to the vector
    rightleftboundary(root, ans);
    
    // Print the boundary nodes
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
