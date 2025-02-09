#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
  public:
      int val;
      TreeNode* right;
      TreeNode* left;

    TreeNode(int val){
       this->val=val;
       right=left=NULL;
    }
};
TreeNode* MakeAtree(int arr[], int size){
     queue<TreeNode*> que;
     int i=0;
     TreeNode* root;
     if(arr[i]==-1) root=NULL;
     else root=new TreeNode(arr[i]);
     if(root!=NULL)que.push(root);
     i++;
     while(que.size()>0 && i<size){
      TreeNode* temp=que.front();
      que.pop();
      if(arr[i]!=-1 && i<size){
        temp->left=new TreeNode(arr[i]);
        que.push(temp->left);
      } 
      else temp->left=NULL;
      i++;

      if(arr[i]!=-1 && i<size){
        temp->right=new TreeNode(arr[i]);
        que.push(temp->right);
      } 
      else temp->right=NULL;
      i++;
      
     }
     return root;
}
// void display(TreeNode* root){
//     if(root==NULL) return;
//   cout<<root->val<<" ";
//   display(root->left);
//   display(root->right);

// }

void morrisTraversal(TreeNode* root){
     TreeNode* curr=root;
     TreeNode* pred;
     while(curr!=NULL){
      if(curr->left!=NULL){ // find predecessor
        pred=curr->left;
        while(pred->right!=NULL && pred->right!=curr) pred=pred->right;
      
      if(pred->right==NULL){  // this is predecessor then link
        pred->right=curr;
        curr=curr->left;
      }
      else{  // for infinte loop
        pred->right=NULL;
        cout<<curr->val<<" ";
        curr=curr->right;
      }
     }
     
     else{   // if no predecessor print and go right
       cout<<curr->val<<" ";
       curr=curr->right;
     }
     }
}
int main(){
  int arr[]={10,5,15,3,8,12,20,-1,-1,6,-1,-1,13,-1,-1};
  int size=sizeof(arr)/sizeof(arr[0]);
  MakeAtree(arr,size);
  TreeNode* root=MakeAtree(arr,size);
  // display(root);
  morrisTraversal(root);
}