#include<iostream>
using namespace std;
int main(){   //  start with a and end with a 

    // cout<<"Enter the string "<<endl;
    // string s;
    // cin>>s;
      

    // int length=s.size();
    // if(s[0]=='a' && s[length-1]=='a') cout<<"yes this string is accepted"<<endl;
    // else cout<<"no this string is not accepted";


    bool state1=true;
    bool state2=false;
    bool state3=false;
    bool finalstate=false; // final state

    cout<<"Enter the string "<<endl;
    string s;
    cin>>s;
    int n=s.size();
    int i=0;

    while(i<n){
       if(state1==true){
         if(s[i]=='a'){
           state1=false;
           finalstate=true;
         }
         else{
          state1=false;
          state2=true;
         }
       }
       else if(state2==true){
         if(s[i]=='a' || s[i]=='b') state2=true; 
       }
       else if(state3==true){
          if(s[i]=='a'){
           finalstate=true;
           state3=false;
          }
          else{
            state3=true;
          }
       }
       else{
         if(s[i]=='a'){
          finalstate=true;
         }
         else{
          finalstate=false;
          state3=true;
         }
       }
       i++;
    }

    if(finalstate==true) cout<<"yes this is valid"<<endl;
    else cout<<"No this is not valid";
    
}