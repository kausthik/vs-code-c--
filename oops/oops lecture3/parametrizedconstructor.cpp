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
        cout<<"you call the constructor"<<endl;
    }
};
int main(){
    bike tvs(4,6);
    bike honda(2,7);

    cout<<tvs.tyresize<<endl;
    cout<<honda.tyresize<<endl;
    cout<<tvs.priceinlakh<<endl;
    cout<<honda.priceinlakh;
}