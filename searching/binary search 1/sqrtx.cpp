#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cout<<"enter the number n : ";
   cin>>n;
   vector<int> v(n);
for(int i=0;i<n;i++){
    v[i]=i;
}

// finding square root algorithm by binary search
int low=0;
int high=n-1;
bool flag=true;
while(high>=low){
    int p=low+(high-low)/2;
    int k=v[p]*v[p];
    if(k==n){
        cout<<"the square root is : "<<v[p];
        flag=false;
        break;
    }
    else if(k>n) high=p-1;
    else low=p+1;
    }
    if(flag==true) cout<<"the square root of "<<n<<" is "<<high;

}
   