//negative to the end and positive in front
#include<iostream>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter the number of element ";
    cin>>n;
    int i=0,j=n-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    while(i<j){
        if(v[j]<0) j--;
        if(v[i]>0) i++;
        if(i>j) break;
        if(v[j]>0 && v[i]<0){
            int temp =v[j];
            v[j]=v[i];
            v[i]=temp;
            j--;
            i++;
        }
    }
    for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}