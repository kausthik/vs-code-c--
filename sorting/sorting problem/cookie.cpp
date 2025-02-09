#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of children : ";
    cin>>n;
    cout<<"enter the size of each cookie : ";
    cin>>m;
    vector<int> greed(n,0);
    vector<int> size(m,0);
    vector<int> distri(n,0);
    cout<<"input the greed of children : "<<endl;
    for(int i=0;i<n;i++){
       cin>>greed[i];
    }
    cout<<"input the size of cookie : "<<endl;
    for(int i=0;i<m;i++){
       cin>>size[i];
    }

    // algorithm for cookie distribution

    sort(greed.begin(),greed.end());
    sort(size.begin(),size.end());

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(distri[j]==1) continue;
          else if(size[i]>=greed[j]) distri[j]++;
          
        }
    }

    cout<<"this is the distribution : "<<endl;
    for(int i=0;i<n;i++){
        cout<<distri[i]<<" ";
    }
    
}