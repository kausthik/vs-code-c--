#include <iostream>
using namespace std;
class cricketer
{
   private:
    string name;
    int age;
    int testmatch;
    float average;
    public:
    void setname(string name){
        this->name=name;
    }
      void setage(int age){
        this->age = age;
    }
      void settestmatch(int testmatch){
        this->testmatch=testmatch;
    }
      void setaverage(float average){
        this->average=average;
    }

    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    int gettestmatch(){
        return testmatch;
    }
    float getaverage(){
        return average;
    }
};
int main()
{    
    string name;
    int age;
    int testmatch;
    float average;
    cricketer player[20];
    for (int i = 0; i < 2; i++)
    {
       cout<<"enter the name of the player "<<endl;
       cin>>name;
       player[i].setname(name);
        cout<<"enter the age of the player "<<endl;
       cin>>age;
       player[i].setage(age);
        cout<<"enter the no. of test match played by the player "<<endl;
       cin>>testmatch;
        player[i].settestmatch(testmatch);
        cout<<"enter the average score of test matches"<<endl;
       cin>>average;
        player[i].setaverage(average);
    }
     for (int i = 0; i < 2; i++)
    {
       cout<<"name of the player is "; 
       cout<<player[i].getname()<<endl;
       cout<<"age of the player is";
       cout<<player[i].getage()<<endl;
    cout<<"no. of test match played by the player is ";
       cout<<player[i].gettestmatch()<<endl;
    cout<<"the average score of test matches is ";
       cout<<player[i].getaverage()<<endl;
    }
}