#include<iostream>
#include<vector>
#include<climits>
// range of k
using namespace std;
int main(){
    int n;
    cout<<"the number of elements in array : ";
    cout<<endl;
    cin>>n;
    vector<float> v;
    cout<<"enter the elements : ";
    cout<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    float p;
    float kmax=(float)(INT_MAX),kmin=(float)(INT_MIN);
    bool flag =true;
   for(int i=0;i<(n-1);i++){
    if(v[i+1]>=v[i]){
        kmax=min((v[i]+v[i+1])/2,kmax);
    }
    else{
         kmin=max((v[i]+v[i+1])/2,kmin);
    }
    if(kmax<kmin){
        flag=false;
        break;
    }
   }
   if(flag==false) cout<<-1;

   else {
    if(kmin-(int)kmin >0){
        kmin=(int)kmin+1;
    }
    cout<<"the range is "<<" ["<<kmin<<","<<(int)kmax<<"]";

}
}