#include<iostream>
#include<vector>
using namespace std;
class Node{
  int value;
  char character;
  Node* left;
  Node* right;

  Node(int val , char c){
       value=val;
       character=c;
       left=right=NULL;
  }
  Node(int val){
    value=val;
    left=right=NULL;
  }

  int minvalueidx(vector<char>& character , vector<int>& frequency){
    int idx;
    int min=frequency[0];

    for(int i=0;i<frequency.size();i++){
      if(frequency[i]<min){
        min=frequency[i];
        idx=i;
      }
    }
    return idx;

}

  Node* constructAtree(Node* head, vector<int>& frequency , vector<char>& character){
      if(head==NULL){
        int min1=minvalueidx(character,frequency);
        int value=frequency[min1];
        int alphabet=character[min1];
        Node* temp=new Node(value,alphabet);
        frequency[min1]=INT_MAX;
        character[min1]='$';


        int min2=minvalueidx(character,frequency);
        value=frequency[min2];
        alphabet=character[min2];
        Node* ptr=new Node(value,alphabet);
        frequency[min2]=INT_MAX;
        character[min2]='$';

        Node* head=new Node(temp->value+ptr->value);
        head->left=temp;
        head->right=ptr;
      }

      else{
        
      }


} 

};

int main(){
     vector<char> character={'f','e','d','a','c','b'};
     vector<int> frequency={2,3,5,10,20,30};
}