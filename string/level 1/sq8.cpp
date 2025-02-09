#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
   string s;
   cout<<"enter the string : "<<endl;
   cin>>s;
   int n=s.size();
   int count=0;
   int count1=0;
   int point=0;
   for(int i=0;i<n;i++){
    if(s[i]=='(') count++;
    else count1++;
    if(count==count1 && count!=0 && count1!=0) {
        point =i;
        break;
    }
   }
   if(point==0) cout<<"there is no breaking point ";
else cout<<"the breaking point is : "<<point;

}
