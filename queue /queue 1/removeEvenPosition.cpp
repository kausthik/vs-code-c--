#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> &qu){
    int size = qu.size();
    int i = size;
    int k;
    while (i > 0)
    {
        k = qu.front();
        cout << k << " ";
        qu.pop();
        qu.push(k);
        i--;
    }
}
void removeAtEven(queue<int> &qu){
     int size=qu.size();
     int i=0;
     int k;
     while(i<size){
       if(i%2==0) qu.pop();
       else{
        k=qu.front();
        qu.push(k);
        qu.pop();
       }
        i++;
     }
     display(qu);
}

int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
   removeAtEven(qu);
}