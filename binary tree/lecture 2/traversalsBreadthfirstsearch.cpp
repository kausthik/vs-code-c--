#include<iostream>
#include<queue>
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

void printusingqueue(Node* root){ // breadth first search
     queue<Node *> que;
     que.push(root);
     while(!que.empty()){
        Node* temp=que.front();
        if(temp!=NULL)  cout<<temp->val<<" ";
        que.pop();
       if(temp->left!=NULL) que.push(temp->left);
        if(temp->right!=NULL)  que.push(temp->right);
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
   printusingqueue(a);
}
