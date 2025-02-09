#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// // leetcode 378
 
// int method1(vector<int>& v, int k){   // sort the array and return k-1 index
//     sort(v.begin(),v.end());     // kth smallest
//     return v[k-1];
// }
// int method2(vector<int> v , int k){    // kth smallest
//     int n=v.size();
//      int min=v[0];
//      int idx=0;
//      for(int j=0;j<k;j++){
//       for (int i=0;i<n;i++){ 
//           if(min>v[i]) {
//             min=v[i];
//             idx=i;
//           } 
//       }  
//       swap(v[idx],v[j]); 
//      }
//      return v[k-1];
// }

// int method4(int k, vector<int> v){   // kth smallest
//    priority_queue<int> pqmax;
//    int n=v.size();
//    for(int i=0;i<n;i++){
//        if(pqmax.size()<k) pqmax.push(v[i]);
//        else {
//          if(pqmax.top()>v[i]) {
//             pqmax.pop();
//             pqmax.push(v[i]);
//          }
//        }
//    }
//    return pqmax.top(); 
// }

// int kthlargest(int k , vector<int> v){        
//    priority_queue<int,vector<int>, greater<int> > pqmin;
//    int n=v.size();
//    for(int i=0;i<n;i++){
//        if(pqmin.size()<k) pqmin.push(v[i]);
//        else {
//          if(pqmin.top()<v[i]) {
//             pqmin.pop();
//             pqmin.push(v[i]);
//          }
//        }
//    }
//    return pqmin.top(); 
// }

//  void ksortedarray(vector<int> v , int k ){
//    int n=v.size();
//    vector<int> ans;
//      priority_queue<int , vector<int> , greater<int> > pqmin;
//      for(int i=0;i<k;i++){
//       pqmin.push(v[i]);
//      }
//      for(int i=0;i<n;i++){
//        if((i+k)<n && pqmin.top()>v[i+k]) ans.push_back(v[i+k]);
//        else {
//         ans.push_back(pqmin.top());
//         pqmin.pop();
//         if(i+k < n)pqmin.push(v[i+k]);
//        }
//      }
//      cout<<"Now the sorted array is "<<endl;
//      for(int i=0;i<ans.size();i++){
//       cout<<ans[i]<<" ";
//      }
//  }

// typedef pair<int,int> pi;  // typedef in C++ is used to create an alias or a shorthand for an existing data type.

//  vector<int> topKFrequent(vector<int>& nums, int k) { // leetcode 347
//         // map pair ele , fre
//        unordered_map<int,int> m;
//        for(auto ele : nums){
//           m[ele]++;
//        }

//        // heap pair is <fre,ele>
//       //  priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>  >;

//       priority_queue<pi,vector<pi>, greater<pi> > pqmin;

//       for(auto ele : m){
//         if(pqmin.size()<k) pqmin.push({ele.second,ele.first}); // pass pair also  by pair<int,int> p={a,b};

//         // else{
//         //   if(pqmin.top()<ele.second);
//         //     pqmin.pop();
//         //     pqmin.push({ele.second,ele.first});
//         // }   

//       }

//         }

//     vector<int> frequencySort(vector<int>& nums) { // leetcode 1636
//         unordered_map<int,int> m;
//         for(auto ele : nums){
//             m[ele]++;
//         }
//         priority_queue<pi,vector<pi>,greater<pi> > pq;
//         for(auto ele : m){
//             pq.push({ele.second,ele.first});
//         }
//         vector<int> ans;
//         while(pq.size()>0){
//             pi p=pq.top();
//             pq.pop();
//             int freq=p.first;
//             int value=p.second;
//             while(freq>0){
//                 ans.push_back(value);
//                 freq--;
//             }
//         }
//         return ans;
//     }


  vector<int> findClosestElements(vector<int>& nums, int k, int x) { //l-658
          priority_queue<int,vector<int>,greater<int> > pq;
          
           for(int i=0;i<nums.size();i++){
            if(pq.size()<k) pq.push(i);
            else{
            int pre=nums[pq.top()]-x;
            if(pre<0) pre=-pre;
            int curr=nums[i]-x;
            if(curr<0) curr=-curr;
            if(pre>curr) {
              pq.pop();
              pq.push(i);
            }
            }
        }

           vector<int> ans;
           while(pq.size()>0){
            ans.push_back(nums[pq.top()]);
            pq.pop();
           }
        
         return ans;
    }

  int minimumcostropes(vector<int> arr){
      priority_queue<int,vector<int> , greater<int> > pq;
      for(int ele : arr){
        pq.push(ele);
      }
      int cost=0;
      while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        cost+=(a+b);
        pq.push(a+b);
      }
      return cost;
  }

  int maximumcost(vector<int> arr){
      priority_queue<int> pq;
      for(int ele : arr){
        pq.push(ele);
      }
      int cost=0;
      while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        cost+=(a+b);
        pq.push(a+b);
      }
      return cost;
  }
int main(){
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    vector<int> v(n); 
    cout<<"Enter the array "<<endl;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      v[i]=x;
    }  

    // cout<<kthlargest(3,v);

    // ksortedarray(v,4);

   cout<<minimumcostropes(v)<<endl;
   cout<<maximumcost(v);


}