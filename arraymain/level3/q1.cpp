#include<iostream>
using namespace std;
//he maximum of j - i subjected to the constraint of A[i] < A[j] 
// & also i < j
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
 int max=0;
 int p;
 for(int i=0;i<(n-1);i++){
    for(int j=(i+1);j<n;j++){
       if(v[i]<v[j]){
        p=j-i;
        if(p>max) max=p;
       }
       }
    }
    cout<<max;
 }
