#include<iostream>
using namespace std;
//  To implement a deque (double-ended queue)
// where you can insert and delete elements from both ends,
class node{
    public:
     node* pre;
     int val;
     node* next;  

     node(int val){
       this->val=val;
       pre=NULL;
       next=NULL;
     } 
};
class queue{
    public:
    node* front;
    node* rear;
    int size;
    queue(){
       rear=front=NULL;
        size=0;
    }
   void push(int item){
     node* new1=new node(item);
      if(front==NULL){
        front=rear=new1;
      }
      else {
        rear->next=new1;
        new1->pre=rear;
        rear=new1;
      }
      size++;
   }
   
   void pop(){
    if(front==NULL) cout<<"UNDERFLOW"<<endl;
    else {
      node* temp=front;
      front=front->next;
      size--;
      delete(temp);   // for no wastage of memory
    }
   }

   void display(){
    node* ptr=front;
    while(ptr!=NULL){
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
   }
 
};
int main(){
     queue q;
    int choice, item;

    while (true) {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the item to push: ";
                cin >> item;
                q.push(item);
                break; 
            case 2:
                q.pop();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }


}