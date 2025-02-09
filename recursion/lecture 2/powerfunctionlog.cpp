#include<iostream>
using namespace std;  
// method 1
int powe(int base , int power){
    if(power==1) return base;
    int ans=powe(base,power/2);
    return ans*ans;
}
int main(){
    int base,power; 
    cout<<"enter the base and power : ";
    cin>>base>>power;
    int count=0;
    int i=power;
    int bhai=1;
    while(i>1){
        if(i%2!=0) count=bhai+count;
        bhai=bhai*2;
       i=i/2;
    }
    int ans =pow(base,count);
    cout<<pow(base,power)<<endl;
    cout<<powe(base,power)*ans;
}