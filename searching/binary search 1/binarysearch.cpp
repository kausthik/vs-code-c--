#include<iostream>
using namespace std;
// binary search algorithm --> to reduce the search space
int main(){
    int n;
    cout<<"enter the number of element : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x;
    cout<<"enter the finding number : "<<endl;
    cin>>x;
    int low=0;
    int high=(n-1);
    for(int i=0;i<n;i++){
        int  p=(low+high)/2;
       if(v[p]==x) {
        cout<<"index is "<<p;
        break;
       }
       else {
        if(v[p]<x){
            low=p+1;
        }
        else{
            high=p-1;
        }
       }
    }
}