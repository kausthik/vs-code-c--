#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverseK(queue<int>& qu , int k){
    int size=qu.size();
   stack<int> stores;
   for(int i=0;i<k;i++){
   stores.push(qu.front());
   qu.pop();
   }
   
    while(!stores.empty()){
    qu.push(stores.top());
    stores.pop();
    
   }
    for(int i=0;i<size-k;i++){
    qu.push(qu.front());
    qu.pop();
   }
   // function for displaying it
   while(!qu.empty()){
    cout<<qu.front()<<" ";
    qu.pop();
   }
}
int main()
{
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    int k;
    cout<<"NO. OF FIRST ELEMENT YOU WANT TO REVERSE :"<<endl;
    cin>>k;
    reverseK(qu,k);
}