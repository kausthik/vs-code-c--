#include<iostream>
#include<string>
// return the no. of times the neighbouring character is different
using namespace std;
int main(){
    string s;
    cout<<"enter the alphabets : "<<endl;
    getline(cin,s);
    int rep=0;
    int n=s.length();
    if(n>1){
    for(int i=0;i<n;i++){
        if(i==0){
            if(s[i]!=s[i+1]) rep++;
        }
        else if(i==(n-1)){
           if( s[i]!=s[i-1]) rep++;
        }
       else if(s[i]!=s[i-1] && s[i]!=s[i+1]) rep++;
    }
    }
    else cout<<rep<<endl;
    

cout<<"the repetation is : "<<rep;

}