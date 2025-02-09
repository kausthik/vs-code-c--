#include<iostream>
using namespace std;
// in bottom its also contain new method of printing
int main(){
    int n;
    cout<<"number of element in array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int j=0;j<(n-1);j++){
        int min=INT_MAX;
        int m=-1;
    for(int i=j;i<n;i++){
       if(arr[i]<min) {
        min=arr[i];
        m=i;
    }
}
swap(arr[m],arr[j]);
}
    

    // new method of printing 
    //for each loop

for(int ele : arr){
    cout<<ele<<" ";
}

}