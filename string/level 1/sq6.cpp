#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter the string : "<<endl;
    cin>>s;
    int n=s.size();
    int arr[n];
    for(int i=0;i<n;i++){
       arr[i]=int(s[i])-48;
    }
    int sum=0;
    for(int i=0;i<n;i++){
    sum=sum+arr[i]*pow(10,n-1-i);
    }
   
   if(sum%7==0) cout<<"it is divisible by 7 ";
   else cout<<"not divisible by 7 ";
   

}
