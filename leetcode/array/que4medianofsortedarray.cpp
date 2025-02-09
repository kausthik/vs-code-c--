#include<iostream>
#include<vector>
using namespace std;
int main(){
   
   // input the size of arrays 

     int n,m;
    cout<<"enter the size of nums1 n is : ";
    cin>>n;
    cout<<"enter the size of nums2 m is : ";
    cin>>m;
   
   // input the element of vector

    vector<float> nums1(n);
    vector<float> nums2(m);
    cout<<"input the nums 1 : "<<endl;
    for(int i=0;i<n;i++){
       cin>>nums1[i];
    }
     cout<<"input the nums 2 : "<<endl;
    for(int i=0;i<m;i++){
       cin>>nums2[i];
    }

    // variable low1 is the pointer for array name nums1
    // variable low2 is the pointer for array name nums2
    // count is for counting

        int low1=0,low2=0,count=0;
        float k;


while((low1+low2)<=(n+m)/2){            //-->loop will run only half times because i want median
          if((nums1[low1]<nums2[low2] && low1!=n) || low2>=m) { //->let nums1={1,4,6} and nums2={3,5,10}
              count++;
              if((n+m)%2==0 && count==(n+m)/2  ){
                k=nums1[low1];
              }
              if(count==(n+m)/2+1) {
                if((n+m)%2==0){
                    cout<<(k+nums1[low1])/2;
                    break;

                }
                  else cout<<nums1[low1];
                  break;
              }
              low1++;
          }
          else if(low2!=m || low1>=n) {
              count++;
               if((n+m)%2==0 && count==(n+m)/2 ){
                 k=nums2[low2];
              }
              if(count==(n+m)/2+1) {
                if((n+m)%2==0){
                    cout<<(k+nums2[low2])/2;
                    break;

                }
                 else  cout<<nums2[low2];
                  break;
              }
              low2++;
          }
        }
}

   
          
  