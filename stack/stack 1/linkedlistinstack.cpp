#include<iostream>           
using namespace std;   

class node {
    public :
       int val;
       node* next;

       node(int val){
          this->val=val;
          next=NULL;
       }
};

class stack {
   public:
    node* head;
    int size;

    stack(){
      size=0;
      head=NULL;
    }
 
node* push(int value){
     node* temp=new node(value);
      temp->next=head;
      head=temp;
     size++;
     return head;
 }

node* pop(){
     if(head==NULL){ 
     cout<<"NO NODE PRESENT";
     }
     else{
      head=head->next;
      size--;
     }
     return head;
 }

 void top(){
   if (head==NULL){
      cout<<"STACK IS EMPTY"<<endl;
      return;
   }
   else{
      cout<<head->val<<endl;
   }
 }
 void Display(node* ptr){
   if(ptr==NULL) return;
      Display(ptr->next);
      cout<<ptr->val<<endl;
 }
  void display(){
        node* ptr=head;
      Display(ptr);
    }
  
};
int main() {
   stack st;
   st.push(80);
   st.push(70);
   st.push(10);
   st.display();
}
