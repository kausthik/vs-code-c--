#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &qu){
     int size=qu.size();
     int i=size;
     int k;
     while(i>0){
        k=qu.front();
        cout<<k<<" ";
        qu.pop();
        qu.push(k);
        i--;
     }
}
int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
   display(qu);
}