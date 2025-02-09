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

    // destructor
    ~bike(){
        cout<<"you call the destructor"<<endl;
    }

};
int main(){
    bike tvs(3,4);
    bike honda(5,6);

    bool flag = true;
    if(flag == true){
        bike bmw(1,2);
        cout<<bmw.tyresize<<" "<<bmw.priceinlakh<<endl;
    } // at this point this object scope has been end so constructor shuld be called

    cout<<tvs.tyresize<<" "<<tvs.priceinlakh<<endl;
    cout<<honda.priceinlakh<<" "<<honda.tyresize<<endl;
}