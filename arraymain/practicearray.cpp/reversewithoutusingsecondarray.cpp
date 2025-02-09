#include<iostream>
using namespace std;
// reverse without using second array
void rev(int i,int j,vector<int> &v){
        for( i,j;j>i;i++, j--){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;

    }
}

int main(){
    vector<int> v;
    int n;
    cout<<"enter the  number of element ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    rev(0,4,v);
    //reverse(v.begin(),v.end());
   for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
   }
    
}