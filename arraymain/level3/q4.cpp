#include<iostream>
using namespace std;
// stock buy and sell problem --> not done 
// not applicable in all situations
int main(){
    int days;
    cout<<"enter the number of days : ";
    cin>>days;
    vector<int> v;
       for(int i=0;i<days;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    // main algorithm
    
    int p;
   for(int j=0;j<(days-1);j=j+p){
   for(int i=j;i<=days ;i++){
    if(v[j]>v[i] && j!=(i-1)) {
        cout<<"one possible is ("<<j<<","<<i-1<<")";
        cout<<endl;
        cout<<"we can buy stock on day "<<j<<" and sell it on day"<<i-1<<"."; 
        cout<<endl; 
        p=i;
        break;
    }
     
   }
    
}
}