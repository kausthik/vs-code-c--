#include<iostream>
using namespace std;
//input a string of length n and count all the vowels in the string
int main(){
    string s="kaushal";

   int k=0;
    for(int i=0;s[i]!='\0';i++){
    if(s[i]=='a' || s[i]=='e'||s[i]=='o' || s[i]=='i' || s[i]=='u' ) k++;
    
   }
   cout<<"the number of vowel is : ";
   cout<<k;

}