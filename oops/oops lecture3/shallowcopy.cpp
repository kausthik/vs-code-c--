#include<iostream>
using namespace std;
class bike {
     public:
     int tyresize;
     int priceinlakh;

    // parametrized constructor
    // use for value intialize
    bike(int tyresize,int priceinlakh){
        this->tyresize=tyresize;
        this->priceinlakh=priceinlakh;
    }

};
int main(){
    bike tvs(3,7);
    bike honda(5,6);

   bike bmw=tvs; // here shallow copy will be formed means bmw point to toh address of tvs
   // if we change data of tvs , data of bmw also be change as well

   cout<<bmw.priceinlakh;
    
}