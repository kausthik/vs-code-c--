#include<iostream>
using namespace std;
void firstnegative(int arr[], int size , int ans[] , int Wsize){
    int negidx=-1;
    for(int i=0;i<Wsize;i++){
       if(arr[i]<0){
         negidx=i;
         break;
       }
    }
     if(negidx==-1) ans[0]=1;
     else ans[0]=arr[negidx];
     int i=1;
     int j=Wsize;
     while(j<size){
        if(negidx>=i) ans[i]=arr[negidx];
        else{
            negidx=-1;
            for(int k=i;k<=j;k++){
                if(arr[k]<0){
                negidx=k;
                break;
                }
            }
           if(negidx==-1) ans[i]=1;
           else ans[i]=arr[negidx];
        }
        i++;
        j++;
     }
}
int main(){
    int arr[]={2,3,4,4,-7,-1,4,-2,6}; 
    int Wsize=2;
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans[size-Wsize+1];
    firstnegative(arr,size,ans,Wsize);
    cout<<"THE ANSWER ARRAY IS : "<<endl;
    for(int i=0;i<size-Wsize+1;i++){
        cout<<ans[i]<<" ";
    }
} 