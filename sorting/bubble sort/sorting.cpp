#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> v(5);
   for(int i=0;i<5;i++){
    cin>>v[i];
   }

   // sorting by inbuild function --> O(nlogn)

   sort(v.begin(),v.end());

   for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
   }

}