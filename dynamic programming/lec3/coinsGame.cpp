#include<iostream>
#include<vector>
using namespace std;

// complete it --> pending

void coinsGame(int k , int l , vector<int>& v){
    v[1]=1;
    v[k]=1;
    v[l]=1;
    for(int i=2 ;i<=1000000 ;i++){
        if(i==k || i==l) continue;
        v[i]=!(v[i-1] and ((i-l >= 1)? v[i-l] : 1) and ((i-k >= 1)? v[i-l] : 1));
    }
}


int main(){     
   vector<int> v(1000005,0);
   coinsGame(2,3,v);
   cout<<v[3]<<v[12]<<v[113]<<v[25714]<<v[88888];

}