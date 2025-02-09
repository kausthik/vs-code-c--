#include<iostream>
using namespace std;
// input string length greater than 5 and reverse 2 to 5 ;
int main(){
    string s="kaushal"; // 0 1 2 3 4 5 6
    reverse(s.begin()+2,s.begin()+6);
    cout<<s;
}