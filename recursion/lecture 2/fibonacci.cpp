#include<iostream>
using namespace std;
int fibo(int ini1,int ini2,int time){
    if(time==1) { // base
   cout<<ini1+ini2; // kaam
    return 0;
    }
    fibo(ini2,ini1+ini2,time-1); // call
    return 0;
}
int main(){
    int ini1=1,ini2=1,time;
    cout<<"enter the time : "<<endl;
    cin>>time;
    cout<<"the "<<time<<"th "<<"term is : "<<endl;
    fibo(ini1,ini2,time-2);
}