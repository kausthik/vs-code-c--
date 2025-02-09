#include<iostream>
#include<vector>
using namespace std;

int maxHappiness(vector<vector<int> >& v){  // bottom to top approach

    for(int i=1;i<3;i++){
    for(int j=0;j<3;j++){
     if(j==0) v[i][j]=v[i][j]+max(v[i-1][j+1],v[i-1][j+2]);
     if(j==1) v[i][j]=v[i][j]+max(v[i-1][j-1],v[i-1][j+1]);
     if(j==2) v[i][j]=v[i][j]+max(v[i-1][j-2],v[i-1][j-1]);
    }
    }

   return max((max(v[2][0],v[2][1])),v[2][2]);

}



int main(){
    // each row represent ith day and the all happiness points of all activities
     vector<vector<int> > v(3,vector<int>(3)); 
     for(int i=0;i<3;i++){       // 10 40 70  , 20 50 80 , 30 60 90
        for(int j=0;j<3;j++){
            int k;
            cin>>k;
            v[i][j]=k;
        }
     }

     cout<<maxHappiness(v)<<endl; 
    

}