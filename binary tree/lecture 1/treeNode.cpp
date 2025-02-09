#include<stdio.h>
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
void display(Node* root){
     if(root==NULL) return;
     cout<<root->val<<' ';
     display(root->left);
     display(root->right);
}

int Sum(Node* root){
    if(root==NULL) return 0;
    return root->val+ Sum(root->left)+Sum(root->right);
}

int size(Node* root){
    // (root==NULL)? return 0 :  return 1+ size(root->left)+size(root->right); not working
    if(root==NULL) return 0;
    return 1+ size(root->left)+size(root->right);
}
int Max(Node* root){
    if(root==NULL) return 0;
    return max(root->val,max(Max(root->left),Max(root->right)));
}
int product(Node* root){
    if(root==NULL) return 1;
    return root->val * product(root->left)*product(root->right);
}
int level(Node* root){
    if(root==NULL) return 0;
    return 1+ max(level(root->left),level(root->right));
}
int main(){
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
    // display(a);
    // cout<<"the sum is "<<Sum(a)<<endl;
    // cout<<"the size is "<<size(a)<<endl;
    // cout<<"the maximum size "<<Max(a)<<endl;
    // cout<<"the product is "<<product(a);
    // cout<<"level of tree is "<<level(a)<<endl;
    char ch='a';
    cout<<ch;
    }
