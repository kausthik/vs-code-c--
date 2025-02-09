#include<iostream>
#include<vector>
using namespace std;
// maxium product in a sub array
// i do for contigous subarray
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
    int pro=1;
    int max =v[0];
    for(int j=0;j<(n-1);j++){
    for(int i=j;i<n;i++){
        pro*=v[i];
        if(pro>max) max=pro;   
    }
    }
    cout<<"the maximum product is "<<max;
}