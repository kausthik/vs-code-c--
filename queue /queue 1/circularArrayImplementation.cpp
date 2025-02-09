#include<iostream>
using namespace std;
int rear=-1,front=-1;
void push(int arr[],int size , int item){
if((front==0 && rear==size-1) || rear+1==front) cout<<"OVERFLOW"<<endl;
   if(rear==-1) {
    rear++;
    front++;
    arr[rear]=item;
}
else if(rear==size-1 && front!=0){
     rear=0;
     arr[rear]=item;
}
else {
    rear++;
    arr[rear]=item;
}
}
void pop(int arr[], int size){
    if(front==-1) cout<<"UNDERFLOW"<<endl;
    if(front==rear) {
        front=-1;
        rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else front++;
}
void Display(int arr[], int size){
    if(rear==-1) cout<<"NO ITEN HAS BEEN PRESENT"<<endl;
    if(rear>=front){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
   else {
    int i=front;
    while(i!=rear+1){
        if(i==size-1){
         cout<<arr[i]<<" ";
         i=0;
        }
        else cout<<arr[i]<<" ";
        i++;
    }
   }
}
int main(){
    int arr[6];
    int size=6;
    int choice, item;

    while (true) {
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the item to push: ";
                cin >> item;
                push(arr, size, item);
                break;
            case 2:
                pop(arr, size);
                break;
            case 3:
                Display(arr, size);
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }


}