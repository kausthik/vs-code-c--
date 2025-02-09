#include<iostream>
using namespace std;
//Accessing through pointer.
// virtual function
//Virtual functions make sure the correct function is called for an object
// regardless of the pointer used for calling it.

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
  

 }