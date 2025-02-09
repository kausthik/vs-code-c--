#include<stdio.h>
int  insertion(int arr[],int lb,int item,int idx){
     for(int i=lb;i>1;i--){
        arr[i+1]=arr[i];
        if(i==idx){
            arr[i]=item;
            break;
        }
     }
     return lb+1;
}
int main(){
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int lb=insertion(arr,n-1,7,2);

for(int i=0;i<=lb;i++){
    printf("%d ",arr[i]);
}
}