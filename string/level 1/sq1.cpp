#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="coding is good for health";
    int len=s.length();

    reverse(s.begin(),s.end()); // --> method 1 inbuilt


    int i=0;                   // --> method 2 reverse
    int j=(len-1);
   while(j>i){
      char temp=s[i];
      s[i]=s[j];
      s[j]=temp;
      i++;
      j--;
   }
    cout<<s;

}