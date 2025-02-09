#include<iostream>
using namespace std;
// first its make the parent object then child object
// data member and member function both will be inherited
class vehicle{   // base class , parent class
public:
int tyresize;
int price;
string name;
float rating;
vehicle(){
    cout<<"you call the vehicle constructor"<<endl;
}
// also function can be transferred

void transfer(){
    cout<<"its also transferable"<<endl;
}
};

// name of the class colon access specifiers name of the parent class
class car : public vehicle{  // derived class, child class
    public:
    car(){
        cout<<"you call the car constructor"<<endl;
    }
};
int main(){
    car bmw;
    bmw.tyresize=90;
    cout<<bmw.tyresize<<endl;
    bmw.transfer();
}