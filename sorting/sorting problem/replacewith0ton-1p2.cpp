#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the elements : ";
    cin>>n;
    vector<int> v(n,0);
    vector<int> m(n,0);
    cout<<"input the string : "<<endl;
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    for(int i=0;i<n;i++){
    int min=INT_MAX;
    int idx=-1;
    for(int j=0;j<n;j++){
    if(m[j]==1) continue;
    else{
    if(v[j]<min) {
    min=v[j];
    idx=j;
    }
    }
    }
    v[idx]=i;
    m[idx]++;

    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    }