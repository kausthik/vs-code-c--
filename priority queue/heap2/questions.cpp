#include<iostream>
using namespace std;
class Minheap{  // implementation of min heap
      public:
      int arr[50];
      int idx;

      Minheap(){
        idx=1;
      }
      
      int top(){  // for return minimum element
         return arr[1];
      }

      void push(int value){  // method to push on min heap
        arr[idx]=value;
        int i=idx;
         while(i!=1){
          int parent=i/2;
          if(arr[i]<arr[parent]) {
            swap(arr[i],arr[parent]);
            i=parent;
          }
          else break;
        }
        idx++;
      }

     void pop(){     // method to pop on min heap
          arr[1]=arr[idx-1];
          idx--;

          // rearrangement 
          int i=1;
          int leftchild=i*2;
          int rightchild=i*2+1;
          while(true){  
            if(arr[i]<=arr[leftchild] && arr[i]<=arr[rightchild]) break;
            if(leftchild>idx-1) break;
            if(arr[leftchild]>arr[rightchild]){
               if(arr[i]>arr[rightchild]) {
                swap(arr[i],arr[rightchild]);
                i=rightchild;
               }
          } 
          else{
               if(arr[i]>arr[leftchild]){
                swap(arr[i],arr[leftchild]);
                i=leftchild;
               }
          }
          leftchild=i*2;
          rightchild=i*2+1;
     } 
     }

      void display(){
        for(int i=1;i<idx;i++){
          cout<<arr[i]<<" ";
        }
      }

};

int main(){
  Minheap pq=Minheap();

 pq.push(10);
 pq.push(20);
 pq.push(11);
 pq.push(30); 
 pq.push(40);
 pq.push(12);
 pq.push(4);
 pq.push(7);
 pq.display();
 cout<<endl;
 pq.pop();
 pq.display();

} 