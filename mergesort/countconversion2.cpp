#include<iostream>
#include<vector>
using namespace std;
int c=0;
int *p=&c;
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
   int i=0,j=b.size()-1;
   while(i<a.size()){
   if(a[i]>b[j]){
     while(j<b.size()){
      if(a[i]>b[j]) {
        *p=*p+(j+1);
      }
      break;
       j--;
     }
   }
   i++;
   }
    i=0,j=0;
   int k=0;
   while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) v[k++]=a[i++];
        else  v[k++]=b[j++];
   }
   if(i<a.size()) while(i<a.size()) v[k++]=a[i++];
   if(j<b.size()) while(j<b.size()) v[k++]=b[j++];
   
}
void mergesort(vector<int> &v){
    int n=v.size();
    if(n==1) return ;
    vector<int> a(n/2),b(n-n/2);
     for(int i=0;i<n/2;i++){
       a[i]=v[i];
     }
     for(int i=0;i<(n-n/2);i++){
      b[i]=v[i+n/2];
     }
    // magic
    mergesort(a);
    mergesort(b);
    // sorting
  merge(a,b,v);
  a.clear();
  b.clear();
}

int main(){
  int n;
   cout<<"enter the size of the vector : ";
   cin>>n;
   cout<<"enter the array : "<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    mergesort(v);
    cout<<"the total number of count conversion is : ";
    cout<<c;
}