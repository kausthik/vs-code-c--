#include<iostream>
using namespace std;
// Check if array can be partitioned into 2 continuous arrays of equal sum.
void prefixsum(vector<int> &v){
 for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
     }
}
int main(){
    int n;
    cout<<"enter the size of the vector : ";
    cin>>n;
    vector<int> v;
}