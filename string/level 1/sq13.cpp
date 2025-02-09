#include<iostream>
#include<vector>
#include<string>
using namespace std;
// different subsequences of  a string 
int main(){
    string str,s;
    cout<<"enter the string : ";
    cout<<endl;
    cin>>str;
    int n=str.size();
    s=str;
    // algorithm for find the number of  subsequences
   int  count=0;
   for(int j=0;j<n;j++){
   sort(str.begin()+j,str.end());
   count++;
   for(int i=(j+1);i<n;i++){
     if(str[i]!=str[i-1]){
        count++;
     }
   }
   cout<<count<<" ";
   str=s;

}
cout<<endl;
 cout<<"the total number of subsequences is : "<<count+1;
}