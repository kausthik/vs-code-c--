#include<iostream>
#include<vector>
using namespace std;

int diceCombinations(int n){  // by brute force
  if(n==0) return 1;
    int sum=0;
    for(int i=1;i<=6;i++){
      if(n-i < 0) continue;
     sum+= diceCombinations(n-i);
    }
    return sum;
}

int diceCombinations2(int n , vector<int>& v){   // by top to down approach
  if(n==0) return 1;
    int sum=0;
    if(v[n]!=-1) return v[n];
    for(int i=1;i<=6;i++){
      if(n-i < 0) continue;
     sum+= diceCombinations(n-i);
    }
    return v[n]= sum;
}

int diceCombinations3(int n, vector<int>& v){
   v[0]=1;
   int i=0;
   while(i<=n){
      for(int i=1;i<=6;i++){
        if(n-i < 0) continue;
        v[i]=v[i]+v[n-i];
      }
      i++;
   }
   return v[n];
}

int main(){
   int n;
   cout<<"Enter the value of n :-" <<endl;
   cin>>n;
   vector<int> v(n+1,-1);
   cout<<"The total number of ways are :- "<<endl;
   cout<<diceCombinations(n)<<endl;
   cout<<diceCombinations2(n,v)<<endl;
   cout<<diceCombinations3(n,v)<<endl;


}