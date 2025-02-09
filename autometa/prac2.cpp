#include<iostream>
using namespace std;
int main(){   //  start and end with different symbols

    bool initial=true;
    bool state1=false;
    bool state2=false;
    bool finalstate1=false;
    bool finalstate2=false; 

    cout<<"Enter the string "<<endl;
    string s;
    cin>>s;
    int n=s.size();
    int i=0;

    while(i<n){
      if(initial==true){
        if(s[i]=='a'){
           state1=true;
            initial=false;
        }
        else{
         state2=true;
          initial=false;
        }
      }
      else if(state1==true){
          if(s[i]=='b'){
            state1=false;
            finalstate1=true;
          }
      }
      else if(finalstate1==true){
        if(s[i]=='a'){
           state1=true;
           finalstate1=false;
        }
      }
      else if(state2==true){
          if(s[i]=='a'){
            state2=false;
            finalstate2=true;
          }
      }
      else{
        if(s[i]=='b'){
          state2=true;
          finalstate2=false;
        }
      }
      i++;
    }

    if(s[0]=='a' && finalstate1) cout<<"yes this is valid"<<endl;
    else if(s[0]=='b' && finalstate2) cout<<"yes this is valid"<<endl;
    else cout<<"No this is not valid";
    
}