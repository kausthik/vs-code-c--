#include<iostream>
using namespace std;
// not done
int main(){
    int a[100],b[100];
        vector<int> v;
    int n;
    cout<<"enter the number of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
    }
    int k;
    int q;
    cout<<"the positive integer k ";
    cin>>k;
    for(int i=0;i<n;i++){
        a[i]=v[i]+k;
    }
    
}