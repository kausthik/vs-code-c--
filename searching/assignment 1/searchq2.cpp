#include<iostream>
#include<array>
using namespace std;
// count total number of one's
int main(){
   int a[]={0,0,0,0,1,1};
   int n=sizeof(a)/sizeof(a[0]);
   int tar;
   cout<<"enter the targeted element : ";
   cin>>tar;
   int high=n-1;
   int low=0;
   while(high>=low){
      int p=low+(high-low)/2;
      if(a[p]==tar){
         if(p==(n-1)){
             cout<<p;
             break;
         }
        else if(a[p]==a[p+1]) low=p+1;
        else {
            cout<<"the upper bound is "<<p;
            break;
        }
      }
      else if(a[p]>tar) high=p+1;
      else low=p-1;
   }

}