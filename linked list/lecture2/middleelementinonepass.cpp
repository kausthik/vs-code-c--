#include <iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;

    node(int info)
    {
        this->info = info;
        this->next = NULL;
    }
};

class linkedlist
{
public:
    node *head;
    node *tail;
    int size;

    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }

    // insert from begining------------------------------------------------------>
    void insertatbegin(int info)
    {
        node *temp = new node(info);
        node *ptr = head;
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            head = temp;
            head->next = ptr;
        }
        size++;
    }
    // display---------------------------------------------------------------------->
    void display()
    {
        node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->info << endl;
            ptr = ptr->next;
        }
    }
  // findmiddle---------------------------------------------------------------------->
  void findmiddle(){
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL ){
        slow=slow->next; 
        fast=fast->next->next;
    }
   cout<<slow->info;
  }
};
int main()
{
    // linkedlist ll;
    

    // // ll.insertatbegin(4);
    // ll.insertatbegin(3);
    // ll.insertatbegin(2);
    // ll.insertatbegin(1);
    // ll.insertatbegin(0);
    // ll.insertatbegin(12);
    // ll.insertatbegin(23);
    // ll.display();
    // ll.findmiddle();
    
    cout<<(NULL==NULL);
     
   

}
