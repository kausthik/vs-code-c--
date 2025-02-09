#include<iostream>
using namespace std;
class node{
    public:
      int val;
      node* next;
      node* prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class linkedlist{
    public:
      node* head;
      node* tail;
      int size;

      linkedlist(){
        tail=head=NULL;
        size=0;
      }

void insert(int val){
      node* temp=new node(val);
      if(head==NULL){
        head=temp;
      }
      else{
        head->next=temp;
        temp->prev=head;
      }
}
 
void display(){
     while(head!=NULL){
         cout<<head->val;
         head=head->next;
     }
}
};

int main(){
    linkedlist ll;

    ll.insert(2);
    ll.insert(4);
    ll.insert(5);
    ll.display();
    
}