#include<iostream>
#include<vector>
using namespace std;
// minimum number of jumps
//not done
void sort(int i,int j,vector<int> &v){
    while(j>i){
     int temp =v[j];
     v[j]=v[i];
     v[i]=temp;
     j--;
     i++;
}
}
int main(){
        vector<int> v;
    int n,k=0;
    cout<<"enter the number of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       v.push_back(x);
    }
    int i=0;
    int p=i+v[i];
    while((n-1)>i){
        i=i+v[i];
        k++;
        if(p>=(n-1)) {
            k++;
            break;
        }
      sort(i+1,p,v);
    }
    cout<<"the minimum number of jump is ";
    cout<<endl;
    cout<<k;

    
}