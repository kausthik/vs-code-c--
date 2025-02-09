#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; // number of boxes
    cin>>n; 
    vector<int> f(n+2,0);

    int m;  // number of query
    cin>>m;
   

   for(int i=0;i<m;i++){  
    int L,R;
    cin>>L>>R;
    f[L]++;
    f[R+1]--;
   }
 
   for(int i=1;i<f.size();i++){    // number of coins in the ith box
    f[i]=f[i-1]+f[i];   
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