#include<iostream>
#include<vector>
using namespace std;
int inf=INT_MAX;
int fn1(int n , vector<int>& v){   // top to down approach
    if(n==1) return 0;
    if(n==2 || n==3) return 1;

    if(v[n]!=-1) return v[n];
   
   return v[n]= 1+min(min(fn1(n-1,v),(n%2==0)? fn1(n/2,v): inf),(n%3==0)? fn1(n/3,v) : inf);

}

int fn2(int n , vector<int>& dp){  // down to top approach
     dp[1]= 0;
     dp[2]=1;
     dp[3]=1;
     int i=4;
     int inf=INT_MAX;
     while(i<=n){
      dp[i]=1+min((min(dp[i-1],(i%2==0)? dp[i/2] : inf)), (i%3==0)? dp[i/3] : inf);
      i++;
     }
     return dp[n];

}

int main(){
   int n;
   cout<<"enter the n "<<endl;
   cin>>n;
   vector<int> v(n+1,-1);
   cout<<"By top to down approach"<<endl;
   cout<<fn1(n,v)<<endl;
   cout<<"By down to top approach"<<endl;
   cout<<fn2(n,v);

}