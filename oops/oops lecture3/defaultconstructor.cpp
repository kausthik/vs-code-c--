#include<iostream>
using namespace std;
class bike {
     public:
     int tyresize;
     int priceinlakh;

    // default constructor
    bike(){
        cout<<"you call the constructor"<<endl;
    }
};
int main(){
    bike tvs;
    bike honda;
}