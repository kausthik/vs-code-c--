#include <iostream>
using namespace std;
void Bubble(int arr[], int size)
{
    for(int i=0;i<size-1;i++){
      for(int j=0;j<size-i-j;j++){
        if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
      }
    }
    return;
}

int main()
{
  int size;
  cout<<"enter the size"<<endl;
  cin>>size;
  int arr[size];
  cout<<"enter the elements of the array "<<endl;
  for(int i=0;i<size;i++){
     cin>>arr[i];
  }
 
  Bubble(arr,size);

  for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
  }

}