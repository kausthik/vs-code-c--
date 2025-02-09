#include<iostream>
using namespace std;
int main(){
   bool is=true;
   bool fs=false;
   bool ts=false;

   bool flag=true;
   string s="";
   while(flag){
    string ch;
     cin>>ch;
    if(is==true){
      if(ch=="b") s+=ch;
      else {
        s+=ch;
        is=false;
        ts=true;
      }
    }
    else if(ts==true){
       if(ch=="a") s+=ch;
      else {
        s+=ch;
        ts=false;
        fs=true;
    }
    }
    else{
      if(ch=="a") {
        s+=ch;
        fs=false;
        ts=true;
      }
      else {
        s+=ch;
       fs=false;
       is=true;
    }
    }
     
   }
}