#include<iostream>
using namespace std;
void gram( vector<int>& v,int idx){
    if(idx==10) return;
   if(v[idx]==0){
    v.push_back(0);
    v.push_back(1);
    gram(v,idx+1);
   }
   else{
    v.push_back(1);
    v.push_back(0);
    gram(v,idx+1);
   }
}
int main(){
    vector<vector<int> > a;
    int idx;
    vector<int> v;
    v.push_back(0);
int row=3;
// cout<<"enter the number of row : ";
// cout<<endl;
// cin>>row;
gram(v,0);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}