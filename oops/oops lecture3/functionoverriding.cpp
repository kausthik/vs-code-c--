#include<iostream>
using namespace std;
// When a function of base class is redefined in it's derived class then
// it's called function overriding.
//Accessing through Scope Resolution Operator.
//Accessing through pointer.

class base{
  public:
  void print(){
    cout<<"bhai mai toh base hu"<<endl;
  }
};
class child : public base{
   public:
   void print(){
     cout<<"bhai mai toh child hu"<<endl;
   }
};
int main(){
   base mahipal;
   child kaushal;
//    mahipal.print();
//    kaushal.print();

   // scope resolution operator

   kaushal.base::print();

}