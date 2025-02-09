#include<iostream>
#include<stack>
using namespace std;
 void nextgreater(int arr[], int size ){
      int ans[size];
      stack<int> st;
      int i=size-1;
      ans[i]=-1;
      st.push(arr[i]);
      i--;
      while(i>=0){
        while(!st.empty() && st.top()<arr[i]){
            st.pop();
        }
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
        i--;
      }

      cout<<"ANSWER ARRAY IS "<<endl;
      for (int i=0;i<size;i++){
        cout<<ans[i]<<" ";
      }

 }
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    nextgreater(arr,size);
}