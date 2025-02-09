#include<iostream>
#include<stack>
using namespace std;
class Node {
    public :
    int val;
    Node* left;
    Node* right;
    Node(int val){
     this->val=val;
     this->left=NULL;
     this->right=NULL;
    }
};

void postorder(Node* root){
    if(root==NULL) return; 
    postorder(root->left);
    cout<<root->val<<" ";
    postorder(root->right);
    
}
// vector<int> preordertraversals(Node* root , vector<int>& ans){
//     stack<Node*> st;
//     st.push(root);
//     Node* temp=st.top();
//     ans.push_back(temp->val);
//     st.pop();
//     if(temp->right!=NULL) st.push(temp->right);
//     if(temp->left!=NULL) st.push(temp->left);
//     while(!st.empty()){
//     temp=st.top();
//     ans.push_back(temp->val);
//     st.pop();
//     if(temp->right!=NULL) st.push(temp->right);
//     if(temp->left!=NULL) st.push(temp->left);
//     }
//     return ans;
// }
int main(){
     vector<int> ans;

    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    Node* h=new Node(8);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    e->left=h;


    // preordertraversals(a,ans);
    // for(int i=0 ;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    postorder(a);
}
