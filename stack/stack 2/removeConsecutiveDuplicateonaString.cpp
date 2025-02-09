#include<iostream>
#include<stack>
using namespace std;
string Removeduplicate(string s){
     int size=s.size();
     stack<char> st;
    int i=0;
    st.push(s[i]);
    i++;
    while(i<size){
        if(st.top()==s[i]) i++;
        else {
            st.push(s[i]);
             i++;
        }
    }
    string save="";
    while(st.size()>0){
        save=st.top()+save;
        st.pop();
    }
    return save;
}
int main(){
    string s; //aaabbcddaabffg --> abcdabfg
    cout<<"enter the string "<<endl;
    cin>>s;
   cout<<Removeduplicate(s);
}