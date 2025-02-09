#include<iostream>
using namespace std;
int main(){
  int size;
  cout<<"enter the index"<<endl;
  cin>>size;
  int m=size/2;
  int n=size/2;
  int p;
  while(m>=0 && n<=size ){
    for(int i=0;i<size/2+1;i++){
      p=1;
      for(int j=0;j<size;j++){
        if(j>=m && j<=n) {
          cout<<p;
          p++;
        }
        else cout<<" ";
      }
      m--;
      n++;
      cout<<endl;
    }
  }
   m=m+2;
   n=n-2;
  while(m<=size/2 && n>=size/2){
    for(int i=0;i<size/2-1;i++){
      p=1;
      for(int j=0;j<size;j++){
        if(j>=m && j<=n) {
          cout<<p;
          p++;
        }
        else cout<<" ";
      }
      m++;
      n--;
      cout<<endl;
    }
  }
  
}