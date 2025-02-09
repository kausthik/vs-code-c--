#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,9};
    int next;
    int k=sizeof(a)/sizeof (a[0]);
    int ini=a[0];
   for(int i=0;i<k;i++){
        if(a[i]!=ini){
            cout<<"the missing integer is"<<endl<<a[i]-1;
        }
        ini++;
   }
}