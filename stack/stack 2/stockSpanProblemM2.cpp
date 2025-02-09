#include<iostream>
#include<stack>
using namespace std;

void stockspanproblem(int arr[], int size) {
    int ans[size];
   int pregre[size];
   stack<int> st;
   int i=0;
   pregre[i]=-1;
   st.push(i);
   i++;
   while(i<size){
    while(!st.empty() && arr[st.top()]<arr[i]) st.pop();
    if(st.empty()) pregre[i]=-1;
    else pregre[i]=st.top();
    st.push(i);
    i++;
   }
   for(int i=0;i<size;i++){
   if(pregre[i]==-1) {
    ans[i]=i+1;
   }
   else{
    ans[i]=i-pregre[i];
   }
   }
   
   for(int i=0;i<size;i++){
    cout<<ans[i]<<" ";
   }
}

int main() {
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int size = sizeof(arr) / sizeof(arr[0]);
    stockspanproblem(arr, size);
    return 0;
}
