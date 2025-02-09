#include<iostream>
using namespace std;  
// method 2
int powe(int base , int power){
    int k= power;
    if(power==1) return base;
    int ans=powe(base,power/2);
    if(k%2==0) return ans*ans;
    else return ans*ans*base;
}
int main(){
    int base,power; 
    cout<<"enter the base and power : ";
    cin>>base>>power;
    cout<<pow(base,power)<<endl;
    cout<<powe(base,power);
}