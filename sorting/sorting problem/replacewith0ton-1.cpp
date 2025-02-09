#include<iostream>
#include<vector>
// only for positive element
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element : ";
    cin>>n;
    vector<int> v(n);
    vector<int> m(n);
    cout<<"the string one is : "<<endl;
for(int i=0;i<n;i++){
    cin>>v[i];
}
int k=0;
for(int i=0;i<n;i++){
    int min=INT_MAX;
    int idx=-1;
for(int j=0;j<n;j++){
   if(v[j]<min && v[j]>=k ) {
    min=v[j];
    idx=j;
}
}
 v[idx]=k;
 k++;
}
cout<<"the string two is : "<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}