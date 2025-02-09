#include<iostream>
using namespace std;
// diamond problem
// by the help of virtual we can make only one instance of a at a time
 class  a{
    public:
    a(){
    cout<<"call the constructor a "<<endl;
    }
 };
 class b : virtual public a{
       public:
    b(){
    cout<<"call the constructor b "<<endl;
    }
 };
 class c :  virtual public a{
     public:
    c(){
    cout<<"call the constructor c "<<endl;
    }
 };
 class d : public b , public c{
       public:
    d(){
    cout<<"call the constructor d "<<endl;
    }
 };

 int main(){
 d kaushal;

 }