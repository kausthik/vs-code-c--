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
void trim(TreeNode* root, int low , int high){
         if(root==NULL) return;
        while(root->left!=NULL && root->left->val<low) root->left=root->left->right;
        while(root->right!=NULL && root->right->val>high) root->right=root->right->left;
        trim(root->left,low,high);
        trim(root->right,low,high);
    }
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
void display(TreeNode* root){
    if(root==NULL) return;
  cout<<root->val<<" ";
  display(root->left);
  display(root->right);

}
int main(){
  int arr[]={3,0,4,-1,2,-1,-1,1};
  int size=sizeof(arr)/sizeof(arr[0]);
  MakeAtree(arr,size);
  TreeNode* root=MakeAtree(arr,size);
  display(root);
}