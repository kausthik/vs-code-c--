#include<iostream>
#include<queue>
using namespace std;

// time complexity 
// for access top() -> O(1)
// for push(x) and pop(x) -  > O(logn)  n=pq.size() 

// problem identification
// kTH smallest and largest , top k frequent  
// sorting sometimes
// at any point of time max and min elements are required  
 
int Maxheap(priority_queue<int>& pq){   
   int n;
   cout<<"Number of element you want to insert"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++){
    int k;
    cout<<"enter the "<<i<<"st value "<<endl;
    cin>>k;
    pq.push(k);
   } 
  cout<<"Max element in maxheap"<<endl;
   return pq.top();
}

int Minheap(priority_queue<int,vector<int>,greater<int> >& pq){ 
   int n;   
   cout<<"Number of element you want to insert"<<endl;
   cin>>n;
   for(int i=1;i<=n;i++){
    int k;
    cout<<"enter the "<<i<<"st value ";
    cin>>k;
    pq.push(k);
   }
    cout<<"Min element in minheap"<<endl;
   return pq.top();
}

int main(){ 
    priority_queue<int> pqmax; // max heap datatype name 
    priority_queue<int,vector<int>,greater<int> > pqmin;  // min heap data type name
     
   
   // cout<<Maxheap(pqmax)<<endl;

    
    cout<<Minheap(pqmin);
    
}