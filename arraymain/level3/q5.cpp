#include<iostream>
using namespace std;
int main(){
   int v[]={1,2,2,3,4,5,6,7,8,9};
   int k=sizeof(v)/sizeof(v[0]);
   int m = (k*(k+1))/2 - k;
   int sum=0;
   for(int i=0;i<k;i++){
      sum=sum+v[i];
   }
   cout<<sum-m;
}