#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
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
    void insertatbegin(int val)
    {
        node *temp = new node(val);
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
            cout << ptr->val << endl;
            ptr = ptr->next;
        }
    }

    // getelement----------------------------------------------------------------------->

    void getelement(int idx)
    {
        if (size == 0 || idx > size)
        {
            cout << "there is no element " << endl;
        }
        else if (idx == 1)
        {
            cout << head->val;
        }
        else if (idx == size)
        {
            cout << tail->val << endl;
        }
        else
        {
            node *ptr = head;
            int nodenum = 1;
            while (nodenum < idx)
            {
                nodenum++;
                ptr = ptr->next;
            }
            cout << ptr->val << endl;
        }
    }

    // delete-------------------------------------------------------------------------->

    void DeleteAtIdx(int idx)
    {
        if (size == 0 || idx > size)
        {
            cout << "INVALID IDX " << endl;
        }
        else if (idx == 1)
        {
            head = head->next;
            size--;
        }
        else
        {
            node *ptr = head;
            int nodesum = 1;
            while (nodesum < (idx - 1))
            {
                nodesum++;
                ptr = ptr->next;
            }
            ptr->next = (ptr->next)->next;
            size--;
        }
    }

    // insert at end-------------------------------------------------------------------->

    void deleteAtend(int val)
    {
        if (size == 0)
            cout << "linked list is empty" << endl;
        else if (size == 1)
        {
            head = tail = NULL;
            size = 0;
        }
        else
        {
            node *temp = head;
            while ((temp->next)->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            size--;
        }
    }
    // display recursively -------------------------------------------------------------------->
    void displayByRecursion(node* head)
    {
        if (head == NULL)
            return;
        cout << head->val << " ";
        displayByRecursion(head->next);
    }

    // insert with given idx------------------------------------------------------------------->

    void insertAtIdx(int idx , int val){
        node* temp=new node(val);
         if(idx>size || idx<1) cout<<"provided index is not present"<<endl; 
         else if(idx==1){
             temp->next=head;
             temp=head;
         }
         else if(idx==size){
            tail->next=new node(val);
         }
         else{
            int count=1;
            node* ptr=head;
            while(count<idx){
                 ptr=ptr->next;
                 count++;
            }
           temp->next=ptr->next;
           ptr->next=temp;
         }
    }
};
int main()
{
    linkedlist ll;

    ll.insertatbegin(4);
    ll.insertatbegin(3);
    ll.insertatbegin(2);
    ll.insertatbegin(1);
    // ll.display();

    ll.DeleteAtIdx(2);
    // ll.display();
    // ll.getelement(2);
    ll.insertAtIdx(2,5);
    ll.display();
}