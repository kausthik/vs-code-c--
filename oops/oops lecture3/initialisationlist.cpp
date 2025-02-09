#include<iostream>
using namespace std;
class bike{
    public:
    int price;
    int rating;
    // this is for given the initialise value for the object
    bike(int p,int r) : price(p), rating(r){}


};

int main(){
   bike kaushal(20,50);
//    bike sachin(10,90);
//    cout<<kaushal.price<<endl;
//    cout<<sachin.price;
cout<<kaushal.price<<endl;
cout<<kaushal.rating;
 }