#include<iostream>
using namespace std;
// yes we update in c++ but not in java
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0 ) str[i]='a';
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
}
