#include<iostream>
using namespace std;
class player {
    private:
    int health;
    string name;


    class  helmet{
        private:
    bool damage;
        public:
    void setdamage(bool damage){
      this->damage=damage;
         }

         bool getdamage(){
            return damage;
         }
    };
    public:

    // setter

    void sethealth(int health){
       this->health=health;
    }
    void setname(string name){
       this->name=name;
    }

    // getter

    int gethealth(){
       return health;
    }
    string getname(){
       return name;
    }
};
int main(){
    player kaushal;
    kaushal.sethealth(8);
}