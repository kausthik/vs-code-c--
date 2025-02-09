#include<iostream>
using namespace std;
int main(){
    int a[100],n;
   cout<<"enter the number of element"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int sum;
   cout<<"enter the sum of pair ";
   cin>>sum;
   for(int j=0;j<(n/2+1);j++){
   for(int i=j;i<n;i++){
        if(a[j]+a[i]==sum){
            cout<<"the pair is "<<a[i]<<"&"<<a[j];
            cout<<endl;
        }
   }
   }
}