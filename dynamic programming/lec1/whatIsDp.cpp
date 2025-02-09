#include<iostream>
#include<vector>
using namespace std;
int sum=INT_MAX;
int Time=0;
// what is recursion
// solving a biggest problem by using  sub problem

// what is Dp
// recursion + memoization 

// there are two methods :- memoization and tabulation

// leetcode 746 :- min cost climbing trees

int mincost(vector<int>& cost, int i,int total){   // simple recursion method
  Time++;
   if(i==cost.size()-1 || i==cost.size()-2){
    return total;
   }
      return min(mincost(cost,i+1,total+cost[i+1]),mincost(cost,i+2,total+cost[i+2]));
 }


int mincost(vector<int>& cost, int i,int total, vector<int>& store){ // by memoization
  if(i==1 || i==0) {
    return cost[i];
  }
    
  if(store[i]!=-1) return store[i];
  return store[i]=cost[i]+min(mincost(cost,i-1,total+cost[i-1],store),mincost(cost,i-2,total+cost[i-2],store));


 }

  int minCostClimbingStairs(vector<int>& cost) {    // by tabulation
       
        for(int i=2;i<cost.size();i++){
            cost[i]=cost[i]+min(cost[i-1],cost[i-2]);
        }
        return min(cost[cost.size()-1],cost[cost.size()-2]);
    }

int main(){
   int n;
   cout<<"enter the size "<<endl;
   cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v[i]=x;
    }
    vector<int> store(n,-1);
    int ans=min(mincost(v,n-1,v[n-1],store),mincost(v,n-2,v[n-2],store));
    cout<<ans<<endl;

}