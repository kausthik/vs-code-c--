#include<iostream>
using namespace std;
// smallest positive missing number 
// positive number starts from one
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
    for(int i=0;i<n;i++){
      if(v[i]>0){
      if(v[i]+1 != v[i+1]){
        cout<<v[i]+1; 
        break;
    }
    }
    
}
}