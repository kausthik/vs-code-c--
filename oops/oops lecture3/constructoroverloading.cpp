#include<iostream>
using namespace std;
// constructor overloading
// same as function overloading , we can make same name of different constructors and
// used it by given different parameters
class car{
    public:
    int tyresize;
    int price;
   car(int ts,int p) : tyresize(ts) , price(p){}
   car(int ts) : tyresize(ts) , price(100){}
   car() : tyresize(100) , price(200){}
};
int main(){
   car bmw(105,205),lambo(309),ferrari;
   cout<<bmw.price<<endl;
   cout<<bmw.tyresize<<endl;
    cout<<lambo.price<<endl;
   cout<<lambo.tyresize<<endl;
    cout<<ferrari.price<<endl;
   cout<<ferrari.tyresize<<endl;
}