#include<iostream>
using namespace std;
int main(){
   string s;
   cout<<"enter the word : "<<endl;
   getline(cin,s);
   int n=s.length();
   int rep=0;
   for(int i=0;i<(n-1);i++){
    int sum=0;
       for(int j=i;j<n;j++){
        if(s[i]==s[j]){
          sum++;
        }
       }
       if(sum>rep) {
        rep=sum;
}
}
for(int i=0;i<(n-1);i++){
    int sum=0;
       for(int j=i;j<n;j++){
        if(s[i]==s[j]) sum++;
        }
        if(sum==rep){
            cout<<s[i]<<" ";
        }
       }
       }

