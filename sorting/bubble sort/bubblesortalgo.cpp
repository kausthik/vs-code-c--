#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element n : ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the numbers : ";
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    // bubble sort

    //  for(int j=n;j>1;j--){
    // for(int i=0;i<(j-1);i++){
    //     if(v[i]>v[i+1] ){
    //         int temp=v[i];
    //         v[i]=v[i+1];
    //         v[i+1]=temp;
            
    //     }
    // }
    
    // }

    
    // bubble sort optimized way

    for(int j=n;j>1;j--){
        bool flag = true;
    for(int i=0;i<(j-1);i++){
        if(v[i]>v[i+1] ){
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
            flag = false;
            
        }
    }
    if(flag==true) break; // swap didn't happen
    }

    // the output is 
    cout<<"the output is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}