#include<iostream>
using namespace std;
int main(){
  int k=1;
  for(int i=0;i<11;i++){
    for(int j=0;j<11;j++){
      if((i<=5 && (i+j)%2==0 && j>=i && j<=(11-i)) ||(i>5 && (i+j)%2==0 && j>=(10-i) && j<=i))
       cout<<k;
      else cout<<" ";
   if((i+j)%2==0 && i<=5){
      if(k<9 && k!=0) k++;
      else if(k==9) k=0;
      else k=9;
    }
     if((i+j)%2==0 && i>5){
      if((i+j)==14 && i==9) k=8;
      else if(k<9 && k!=0) k--;
      else if(k==9) k=0;
      else k=9;
    }
    }
    cout<<endl;
  }
}