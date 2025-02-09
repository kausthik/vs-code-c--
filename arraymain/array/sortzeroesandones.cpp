#include<iostream>
#include<vector>
// 1st method
using namespace std;
void sort(vector<int> &v,int n){
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(v[i]==0)  zero++;
        if(v[i]==1)  one++;
    }
    for(int i=0;i<n;i++){
    if(i<(zero)) v[i]=0;
    else v[i]=1;
    
}
}
int main(){
    vector<int> v;
    int n;
    cout<<"number of element in vector ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}