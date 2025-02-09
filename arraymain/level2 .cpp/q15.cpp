#include<iostream>
#include<vector>
using namespace std;
// longest consecutive sequence
int main(){
    vector<int> v;
    int n;
    cout<<"enter the number of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
    }
    sort(v.begin(),v.end());
    int seq =1;
    int max=1;
    for(int i=0;i<n;i++){
        if(v[i]+1==v[i+1]) seq++;
        if(seq>max) max=seq;
         if(v[i]+1!=v[i+1]) seq=1;
        
    }
    cout<<"the maximum consecutive sequence is "<<max;
}