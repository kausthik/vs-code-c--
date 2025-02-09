#include<iostream>
using namespace std;
// multiple inheritance is muslitple parents and a single child
 class A{
    private:
    int a_private;  
    protected:
    int b_protected; 
    public:
    int c_public; 
};
class B : protected A {  
    
};
class C : protected B , public A{ // multiple inheritance

};
int main(){
     
}

// hierarchical inheritance -> single parent multiple child
// hybrid inheritance -> mixture any number of parent and a child 