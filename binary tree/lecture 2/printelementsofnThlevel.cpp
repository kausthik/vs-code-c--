#include<iostream>
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
int level(Node* root){
    if(root==NULL) return 0;
    return 1+ max(level(root->left),level(root->right));
}
void printatlevel(Node* root , int level, int currlevel){
     if(root==NULL) return;
     if(currlevel==level){
        cout<<root->val<<" ";
        return;
     }
     printatlevel(root->left,level,currlevel+1);
     printatlevel(root->right,level,currlevel+1);
}

void levelorder(Node* root){
    int n=level(root);
    for(int i=0;i<n;i++){
        printatlevel(root,i,1);
        cout<<endl;
    }
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
   int level;
  levelorder(a);
}
