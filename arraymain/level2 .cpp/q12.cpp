#include<iostream>
#include<vector>
using namespace std;
// Find the Largest sum contiguous Subarray	
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
    int max = v[0];
    for(int j=0;j<(n-1);j++){
   for(int i=0;i<n;i++){
       sum+=v[i];
       if(sum>max) max=sum;
   }
   sum=0;
    }
    cout<<"the maximum sum is "<<max;
}