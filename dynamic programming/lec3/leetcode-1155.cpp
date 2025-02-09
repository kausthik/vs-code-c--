#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
  #define mod 1000000007
    int helper(int n, int k, int target, vector<vector<int>>& v){
        if(target==0 && n==0) return 1;
        if(n==0) return 0;
        int sum=0;
        if(v[n][target]!=-1) return v[n][target];
        for(int i=1;i<=k;i++){
            if(target-i < 0 )  break;
            sum=((sum%mod) +(helper(n-1,k,target-i,v)%mod))%mod;
        }
        return v[n][target]=sum%mod;
    }
    int numRollsToTarget(int n, int k, int target) {
       vector<vector<int>> v(n+1,vector<int>(target+1,-1));
       return helper(n,k,target,v);
    }
};

int main(){
   

}