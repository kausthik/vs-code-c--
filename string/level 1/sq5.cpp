#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> str;
    int n;
    cout<<"number of words : ";
    cout<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        str.push_back(x);
    }
    string s,m;
    cout<<"enter the first string : "<<endl;
    cin>>s;
    cout<<"enter the second string : "<<endl;
    cin>>m;
    int fir,sec;
    int min=(n-1);
    int k;
    for(int i=0;i<n;i++){
       if(str[i]==s) fir=i;
       if(str[i]==m) sec=i;
        k=max(fir-sec,sec-fir);
       if(k<min) min=k;
    }
    cout<<endl;
    cout<<"the minimum distance is : "<<min;
}