#include<iostream>
using namespace std;
int main(){
   int n,i,j,k,water,q,twater=0;
   cout<<"the total numbers of height : ";
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   int sum=0;
   // the trapping water is .
   for(j=0;j<(n-1);j=j+q){
      q=0;
    for(int i=j;i<n;i++){
   if(a[j]<=a[i]  && a[j]!=0 && i!=j){
     //function for height between them
     for(int k=(j+1);k<i;k++){
        sum=sum+a[k];
     }
        water=a[j]*(i-(j+1))-sum;
        twater=twater + water;
        sum=0;
        q=i-j;
        break;
        

   }
}
  if(q==0) q++;
}
cout<<twater;
}
