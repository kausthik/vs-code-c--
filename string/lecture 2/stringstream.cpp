#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str="we all are computer engineer";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}