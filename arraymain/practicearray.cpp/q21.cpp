#include<iostream>
using namespace std;
// stock span
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
    int k=1;
    for(int j=0;j<n;j++){
        for(int i=j;i>=0;i--){
           if(v[j]>v[i-1] && i>=0){
              k++;
           }
           else{
            cout<<k<<" ";
            break;
           }
        }
        k=1;
    }
}