#include<iostream>
#include<stack>
using namespace std;
void pushfrombottom(stack<int> st,int x){
    int size=st.size();
    int arr[size];
    int i=0;

    // pop all the elements from stack and store in the array

     while(st.size()>0){
        int k=st.top();
        st.pop();
        arr[i]=k;
        i++;
     }

     // push the given element in the array from the bottom
     st.push(x);

     // for loop for pushing the elements back from the array
     for(int i=size-1;i>=0;i--){
        st.push(arr[i]);
     }
     // for printing the elements from the stack
       while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
   stack<int> st;
    int x;
    st.push(30);
    st.push(20);
    st.push(10);
    cout<<"enter the value "<<endl;
    cin>>x;
    pushfrombottom(st,x);
  
}