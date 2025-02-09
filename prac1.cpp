#include<iostream>
using namespace std;
int main(){
  
  bool flag=true;
  string s;
  cout<<"enter the string"<<endl;
  cin>>s;
  
  int i;
  for(i=0;i<s.size()-2;i++){
     if(s[i]!='a' && s[i]!='b' ) {
      cout<<"invalid";
      flag=false;
      break;
     }
  }
    if(flag==true){
      if(s[i]=='a' && s[i+1]=='b'){
        cout<<"this is valid";
      } 
      else cout<<"invalid";
    }
   
     
   }
