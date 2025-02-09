#include<iostream>
#include<vector>
using namespace std; 
void merge(){
  
}
void mergesort(vector<int>& nums ,vector<int>& ans , int start , int end){
     if(start<=end) return;
     int p=start+(end-start)/2;
     mergesort(nums,ans,start,p);
     mergesort(nums,ans,p+1,end);

     merge();
}
vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int> ans;
        vector<int> store(mapping.size());
        int i=0;
        int j;
     while(i<nums.size()){
        bool flag=false;
        int k=nums[i];
        store[mapping[i]]=i;
        if(k==0){
           flag=true;
           ans.push_back(mapping[0]);
        }
        int sum=0;
        int n=1;
        while(k!=0){
        j=mapping[k%10]*n;
        sum=sum+j;
        n=n*10;
        k=k/10;
        }
        if(flag==false) ans.push_back(sum);
        i++;
     }   
     return nums ;
 }
int main(){
   // mapping = [8,9,4,0,2,1,3,5,7,6], nums = [991,338,38]
   vector<int> mapping={8,9,4,0,2,1,3,5,7,6};
}