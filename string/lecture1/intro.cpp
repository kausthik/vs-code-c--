#include<iostream>
using namespace std;
int main(){
    //first
    char ch[]= "hykaushal";
    //second
    char ch[]={'a','b','c'};
     // first output way
     cout<<ch;
    // second and third way
     for(int i=0;ch[i]!='\0';i++){
        cout<<ch[i]<<" ";
    }

    for(int i=0;ch[i]!='\0';i++){
         cout<<ch[i]<<" ";
     }
    
}