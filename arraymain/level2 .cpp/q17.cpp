#include<iostream>
using namespace std;
// maximum sum in the configuration
void rotate(int i,int j ,vector<int> &v){
    while(j>i){
        int temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        i++;
        j--;
    }
}
int main(){
        vector<int> v;
    int n,p,sum=0;
    cout<<"enter the number of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
    }
    p=v[0];
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
      int k = v[i]*i;
      sum=sum+k;
      if(sum>p) p=sum;

    }
    rotate(0,n-2,v);
    rotate(0,n-1,v);
    sum=0;
        }
    cout<<p;
}