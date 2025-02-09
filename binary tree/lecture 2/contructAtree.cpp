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
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
Node* constructTree(int arr[], int size){
    queue<Node*> que;
    Node* l;
    Node* r;
    Node* root=new Node(arr[0]);
    que.push(root);
    int i=1;
    int j=2;
    while(que.size()>=0 && i<size){
    if(arr[i]!=INT_MIN) l=new Node(arr[i]);
    else  l=NULL;
    if(j!=size && arr[j]!=INT_MIN) r=new Node(arr[j]);
    else r=NULL;
    Node* temp=que.front();
    que.pop();
    temp->left=l;
    temp->right=r;
    if(l!=NULL) que.push(l);
    if(r!=NULL) que.push(r);
    i+=2;
    j+=2;
   }
   return root;
}

int main(){
   int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
   int size=sizeof(arr)/sizeof(arr[0]);
   Node* root=constructTree(arr,size);
   display(root);
}
