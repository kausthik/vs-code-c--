#include<iostream>
using namespace std;

class node {
    public:
        int info;
        node* next;

        node(int info) {
            this->info = info;
        }
};

int main() {
    node a(20), b(30), c(50), d(60);
    
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    
    cout<<((a.next)->next)->info<<""<<endl;
    cout << ((a.next->next)->next)->info << endl;
    cout << (*(*(*a.next).next).next).info << endl;

    cout << "now loop " << endl;
    node temp = a;

    // Traverse the linked list and print each node's info
    while (temp.next != NULL) {
        cout << temp.info << " ";
        temp = *temp.next;
    }
    cout << temp.info << endl;

    return 0;
}