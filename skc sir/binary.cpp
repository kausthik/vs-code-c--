#include <iostream>
using namespace std;
void Binarysearc(int arr[], int size, int item)
{
  int i = 0;
  int j = size - 1;
  while (j>=i)
  {
    int p = (i+j)/2;
    if (arr[p] == item){
      cout<<"found";
      return;
    }

    if (arr[p] > item)
    {
      j = p - 1;
    }
    else
    {
      i = p + 1;
    }
  }
  cout<<"not found";
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
  int item ;
  cout<<"enter the item"<<endl;
  cin>>item;
  Binarysearc(arr,size,item);


}