#include<iostream>
using namespace std;
class car {
   public:
   static string name; // this belongs to the class , not made especially for every obje
   int price;

   car(int price){
      this->price=price;
   }

   // static function
   // its also belongs to the class and you can only call static variable by this static
   // function because another variable made when object is defined.
   static void namechange(){
    name="sachin";
   }
};
string car::name="kaushal";
int main(){
    car bmw(2),royals(7),lambo(3);
    cout<<bmw.name<<endl;
    cout<<bmw.price<<endl;
    cout<<royals.name<<endl;
    cout<<royals.price;
    
}