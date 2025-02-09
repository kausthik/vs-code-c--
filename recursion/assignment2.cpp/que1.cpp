#include<iostream>
using namespace std;
// Print all the elements of an array in reverse order.
// by the help of recursion
void reverse(int arr[],int n){
    if(n<0) return ;
   cout<<arr[n]<<" ";
   reverse(arr,n-1);
}
int main(){
    int arr[]={1,2,4,6,7}; // 0,1,2 ....
    int n =sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n-1);

}
