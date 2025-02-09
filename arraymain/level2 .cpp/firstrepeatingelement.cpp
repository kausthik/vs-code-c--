#include<iostream>
using namespace std;
int main(){
   int a[100],n;
   cout<<"enter the number of element"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
    cout<<" ";
   }
   for(int i=0;i<n;i++){
    if(a[i]==a[i+1]){
      cout<<a[i];
      break;
    }
   }

}
