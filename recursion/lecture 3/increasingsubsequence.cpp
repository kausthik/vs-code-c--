#include<iostream>
#include<vector>
using namespace std;
// print increasing subsequence 
void subse(vector<int> &v,vector<int> d,int k,int ini){
    if(ini==v.size()){
        if(d.size()==k){
        for(int i=0;i<d.size();i++){
            cout<<d[i]<<" ";
        }
        cout<<endl;
        }
        return;
    }
    if(d.size()+(v.size()-ini)<k) return; // time complexity better ho gye
     int p=v[ini];
     subse(v,d,k,ini+1);
      d.push_back(p);
     subse(v,d,k,ini+1);
}
int main(){
  vector<int> v;
  vector<int> d;
  int k=3;
//   cout<<"enter the size of subsequence : "<<endl;
//   cin>>k;
  int size=5;
//   cout<<"enter the size of vector : "<<endl;
//   cin>>size;
  cout<<"enter the values of vector : "<<endl;
  for(int i=0;i<size;i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  subse(v,d,k,0);

}