#include<iostream>
using namespace std;
// function overloading
// we can use same function name for different works by given the different parameters

class area{

    // same function name with different parameters
public:
 void calculatearea(int a,int b){
    cout<<a+b<<endl;
 }
 void calculatearea(int a){
    cout<<a*a<<endl;
 }
 void calculatearea(float a){
    cout<<3.14*a*a;
 }
 
};
int main(){
    area kaushal;
    float k=2.3;
    kaushal.calculatearea(2,4);
    kaushal.calculatearea(2);
    kaushal.calculatearea(k);
}