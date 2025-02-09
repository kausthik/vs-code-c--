#include<iostream>
using namespace std;

// three pointer method for store two sorted array in one in sorted manner
// its a stable sorting

void merge(vector<int> a,vector<int> b,vector<int> &v){
     int i=0;
     int j=0;
     int k=0;
     while(i<a.size() && j<b.size()){
      if(a[i]>b[j]) v[k++]=a[i++];
      else v[k++]=b[j++];
     }
     if(i<=a.size()) {
      while(i<a.size()){
        v[k++]=a[i++];
      }
     }
     if(i<b.size()){
      while(j<b.size()){
        v[k++]=b[j++];
      }
     }
     return;
}

// mergesort main algorithm with time complexity is O(nlogn)
// very important part of the code

void mergesort(vector<int> &v){
    int n=v.size();
    if(n==1) return;
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

// it is the main function 

int main(){
   int n;
   cout<<"enter the size of the vector : ";
   cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    mergesort(v);
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
}