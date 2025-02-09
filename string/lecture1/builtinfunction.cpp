#include<iostream>
using namespace std;
int main(){
        // for size and length

//     string str="kaushal is the student";
//     cout<<str.size();
//     cout<<endl;
//     cout<<str.length();

        // for pushback and popback
 
//  string str="abcd";
//  cout<<str<<endl;
//  str.push_back('e');
//  cout<<str<<endl;
// str.pop_back();
// cout<<str;

       // addition of string

    // string s;
    // s="kaushal";
    // string k;
    // k="kumar";
    // s=s+k;
    // cout<<s<<endl;
    // s=k+s;
    // cout<<s<<endl;
    // s=k+'w';
    // cout<<s<<endl;

      // reverse

string str;
str="kaushal"; // 0 1 2 3 4 5 6
reverse(str.begin(),str.end());
cout<<str<<endl;
str="ayush"; // 0 1 2 3 4 
reverse(str.begin()+2,str.end()-1);
cout<<str<<endl;
str="jaimatadi";
reverse(str.begin()+2,str.begin()+4);
cout<<str;
}