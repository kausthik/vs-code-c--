#include<iostream>
using namespace std;
// stair path using 1,2 and 3 case.
int ways(int n){
    if(n<0) return 0;
    if(n==0) return 1;
    int ans = ways(n-1) + ways(n-2) + ways(n-3);
    return ans;
}
int main(){
   int n;
   cout<<"enter the number of stairs : ";
   cin>>n;
   if(n==0) cout<<"no ways";
   else{
    cout<<"the number of ways is : ";
     cout<<ways(n);
   }

}