#include<iostream>
using namespace std;
// find the minimum element in rotated and sorted array 
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
    cout<<v[0];
}