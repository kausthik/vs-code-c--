#include<iostream>
using namespace std;
// multi level inhertitance is like parent , child , grandchild
class A{
    private:
    int a_private;  
    protected:
    int b_protected; 
    public:
    int c_public; 
};

class B : protected A{  // a can't be inherited , b is protected, c is public ; 
    
};
class c : public B{ // b is protected and c is protected

};
int main(){
  
}