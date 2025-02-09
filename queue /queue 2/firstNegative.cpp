#include <iostream>
#include <vector>
#include <queue>
#include<stack>
using namespace std;
void Firstnegative(vector<int>& v , int k){
     int size=v.size();
     queue<int> qu;
     vector<int> ans;
     for(int i=0;i<size;i++){
        if(v[i]<0) qu.push(i);
     }
       for(int i=0;i<size;i++){
        if((i+k-1)<qu.front()){
            
        }
     }
}
int main(){
    int k;
    vector<int> v={0,-1,-2,3,4,-5,6,4,7-8};
    cout<<"Enter the window size"<<endl;
    cin>>k;
    
}