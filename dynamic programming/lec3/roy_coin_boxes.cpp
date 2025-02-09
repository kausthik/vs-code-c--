#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; // number of boxes
    cin>>n; 
    vector<int> f(n+1,0);

    int m;  // number of query
    cin>>m;
    vector<int> l(n+1,0);  // for storing left limit of query
    vector<int> r(n+1,0);  // for storing right limit of query

   for(int i=0;i<m;i++){  
    int L,R;
    cin>>L>>R;
    l[L]++;
    r[R]++;
   }

   f[1]=l[1];  // base case

   for(int i=2;i<=n;i++){     // f[i] represent number of coins in the ith box
    f[i]=l[i]+f[i-1]-r[i-1]; 
   }

   vector<int> c(10000005,0); // c[i] represent number of times we have ith coin
   for(int i=0;i<=n;i++){
      c[f[i]]++;
   }

   // suffix sum;

   for(int i=c.size()-2;i>=0;i++){   
    c[i]=c[i+1]+c[i];
   }


}