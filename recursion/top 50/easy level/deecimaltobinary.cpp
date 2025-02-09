#include<iostream>
#include<vector>
using namespace std;
void  binary(int n,vector<int>& v){  // if 17 
   if(n==1){
     v.push_back(1);
     return ;
   }
   binary(n/2,v);
   if(n%2==0) v.push_back(0);
   else v.push_back(1);
   return;
   
}
int main(){
    int n;
    vector<int> v;
    cout<<"enter the number for making binary : ";
    cin>>n;
    binary(n,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}