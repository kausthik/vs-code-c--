#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
  cout<<"enter the number of element : ";
  cout<<endl;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  for(int i=1;i<n;i++){
  int count=1;
  for(int j=i;j<n;j++){
    if(v[j]==v[j-1]) count++;
    else break;
  }
  if(count>(n/2)) cout<<"the majority element is : "<<v[i];
  if(count>n/2) break;
}
}
