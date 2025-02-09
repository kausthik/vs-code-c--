#include<iostream>
#include<vector>
using namespace std;
// push zeroes in end while maintaing the order of the zeroes
int main(){
    int n;
    cout<<"enter the number of elements : ";
    cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   bool flag=true;
   for(int i=0;i<(n-1);i++){
   for(int j=0;j<n;j++){
    if(v[j]==0 && v[j+1]!=0){
        swap(v[j],v[j+1]);
        flag = false;
    }
   }
     if(flag==true) break;
}
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
}

