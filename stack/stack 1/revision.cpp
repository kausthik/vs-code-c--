#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void monotonic(vector<int>& num , vector<int>& result){
     int n=num.size();
     stack<int> s;
     for(int i=0;i<n;i++){
        while(!s.empty() && s.top()>num[i]){
        int k=s.top();
        result.push_back(k);
        s.pop();
     }
     s.push(num[i]);
     if(result.size()!=0){
        for(int i=result.size()-1;i>=0;i--){
        s.push(result[i]);
        result.pop_back();
     }
     }
    
     }
     while(!s.empty()){
        result.insert(result.begin(),s.top());
        s.pop();
     }
}
int main(){
    vector<int> num ;
    num.push_back(2);num.push_back(4);num.push_back(5);num.push_back(8);num.push_back(7);
    num.push_back(1);num.push_back(6);
    vector<int> result;
    monotonic(num,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}