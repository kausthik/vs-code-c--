#include<iostream>
using namespace std;
int main(){
     int n,m,i=0,j=0;
    cout<<"enter the number of children : ";
    cin>>n;
    cout<<"enter the size of each cookie : ";
    cin>>m;
    vector<int> g(n,0);
    vector<int> s(m,0);
    cout<<"input the greed of children : "<<endl;
    for(int i=0;i<n;i++){
       cin>>g[i];
    }
    cout<<"input the size of cookie : "<<endl;
    for(int i=0;i<m;i++){
       cin>>s[i];
    }
    int count=0;
    while(i<n && j<m){
        if(s[j]>=g[i]){
           count++;
           i++;
           j++;
        }
        else j++;
    }
    cout<<"number of childrens having a cookie : "<<count;

}