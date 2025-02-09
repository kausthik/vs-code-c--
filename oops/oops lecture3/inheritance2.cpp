#include<iostream>
using namespace std;
class A{
    private:
    int a_private;  // not accessable and  not inherited
    protected:
    int b_protected; // not accessable but  inherited
    public:
    int c_public; //accessable and inherited
};
// elements from A is public for B , meaning of sentence after colon
// ** only lower or equal access specifier can be inherited from the parent class. // 
// any time security can't be downgraded
class B : public A{

    // protected will stay protected if public and protected access specifier be 
    // used . beacuse security downgrade is not possible
};
int main(){
   B kaushal;
   kaushal.c_public=10;
   cout<<kaushal.c_public;
}