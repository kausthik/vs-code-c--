#include<iostream>
using namespace std;
// wave array
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
     // first i sort the array
     sort(v.begin(),v.end());
     for(int i=0;i<n;i=i+2){
        int temp=v[i];
        v[i]=v[i+1];
        v[i+1]=temp;
        p=p+1;
        if(p==(n/2)) break;
     }
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
     }
}