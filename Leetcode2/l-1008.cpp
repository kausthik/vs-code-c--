#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* right;
    node* left;
    node(int val){
    this->val=val;
    this->right==NULL;
    this->left==NULL;
    }
 node* makeBST(vector<int>& preorder, int lb , int ub){
        if(lb>ub) return NULL;
        if(ub==lb) return new node(preorder[lb]);
        node* root=new node(preorder[lb]);
        lb=lb+1;
        int i=lb;
        int length=0;
        while(preorder[i]<root->val) {
            length++;
            i++;
            if(i>ub) break;
        }
        root->left=makeBST(preorder,lb,lb+length-1);
        root->right=makeBST(preorder,lb+length,ub);
        return root;
    }
    node* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        return makeBST(preorder,0,n-1);
    }
};
   

int main(){

}