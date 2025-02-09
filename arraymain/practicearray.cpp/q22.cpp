#include<iostream>
using namespace std;
// find triplet that sums to the given value
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
    int sum;
    cout<<"the given sum is ";
    cin>>sum;
    for(int z=0;z<(n-2);z++){
        for(int j=(z+1);j<(n-1);j++){
            for(int i=(j+1);i<n;i++){
                if(v[z]+v[j]+v[i]==sum){
                    cout<<v[z]<<" "<<v[j]<<" "<<v[i];
                }
            }
        }
    }

}