#include<iostream>
using namespace std;
// leetcode 238
// product of array except itself
void product(vector<int>& v){
    int pdt=1;
    int count=0;
     for(int i=0;i<v.size();i++){
        if(v[i]!=0) pdt*=v[i];
        if(v[i]==0) count++;
    }
     for(int i=0;i<v.size();i++){
     if(count>1) v[i]=0;
     else if(count==1) {
         if(v[i]==0) v[i]=pdt;
         else v[i]=0;
     }
     else v[i]=pdt/v[i];
    }
}
int main(){
    int n;
    cout<<"enter the size of the vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the vector : "<<endl; // 1,2,3,0,0
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    product(v);
    cout<<"The result is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}