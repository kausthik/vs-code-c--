#include<iostream>
using namespace std;
void runs(int arr[],vector<int> v,int n,int idx,vector<int>& d){
    int sum=0;
    for(int i=0;i<v.size();i++){
       sum=sum+v[i];
    }
    if(sum==25){
        d.push_back(1);
         for(int i=0;i<v.size();i++){
         cout<<v[i]<<"";
    }
    cout<<endl;
    return;
    }
   if(sum>25) return;
   for(int i=idx;i<n;i++){
      int k;
      if(i==0)  k=1;
      if(i==1)  k=4;
      if(i==2)  k=6;
      v.push_back(k);
      runs(arr,v,n,i,d);
      v.pop_back();
   }

}
int main(){
    int arr[]={1,4,6};
    vector<int> v,d;
    cout<<"THE WAYS ARE : ";
    cout<<endl;
    runs(arr,v,3,0,d);
    cout<<"THE TOTAL NUMBER OF WAYS IS : ";
    cout<<d.size();
}