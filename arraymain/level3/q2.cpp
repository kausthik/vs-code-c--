#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"number of element in array v : ";
    cin>>n;
    cout<<"number of element in array m : ";
    cin>>p;
    vector<int> v,m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        m.push_back(x);
    }
    // function for sorting the array
    sort(v.begin(),v.end());
    sort(m.begin(),m.end());
    
    // ist case -->  start from array v
    int sum1=0;
    int sto=0;
    for(int i=0;i<n;i++){
        sum1=sum1+v[i];
        for( int k=0;k<p;k++){
           if(v[i] == m[k]){
             sto=k;
             break;
        }
    }
      if(v[i]==m[sto]) break;
}
   for(int i=(sto+1);i<p;i++){
       sum1=sum1+m[i];
   }

   // 2nd case --> start from array m

      int sum2=0;
    sto=0;
    for(int i=0;i<p;i++){
        sum2=sum2+m[i];
        for( int k=0;k<n;k++){
           if(m[i] == v[k]){
             sto=k;
             break;
        }
    }
      if(m[i]==v[sto]) break;
}
   for(int i=(sto+1);i<n;i++){
       sum2=sum2+v[i];
   }


   // the final input ..

   cout<<"the maximum sum is : ";
   cout<<endl;
   cout<<max(sum1,sum2);

}