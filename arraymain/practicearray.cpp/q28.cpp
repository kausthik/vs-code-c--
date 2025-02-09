#include<iostream>
using namespace std;
// majority of the elements
// if the elements appear more than n/2 times..
    int main(){
    int n;
    cout<<"enter the elements in array : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int p=0;
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
       if(v[j]==v[i]) p++;
       if(p>(n/2)) {
        cout<<"the majority element is : "<<v[j]<<" ";
        break;
    }
    }
    if(p>(n/2)) break;
    p=0;
}
    }