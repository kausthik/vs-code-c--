#include <iostream>
using namespace std;
int Linearsearch(int arr[], int size, int item)
{
  int i=0;
  while(i<=size-1){
   if(arr[i]==item) return i;
   i++;
  }
  return -1;
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
  int k=Linearsearch(arr,size,item);
  if(k==-1) cout<<"not found";
  else cout<<"found";

}