#include<iostream>
#include<vector>
using namespace std;
// its only give contigous subarray
// this code is not full
// Find if there is any subarray with a sum equal to zero
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
    int sum=0;
    for(int j=0;j<(n-1);j++){
    for(int i=j;i<n;i++){
       sum+=v[i];
       int temp=i;
       if(sum==0){
        for(int i=j;i<=temp;i++){
           cout<<v[i]<<" ";
        }
        cout<<endl;
       }
    }
    sum=0;
    }
    
}
