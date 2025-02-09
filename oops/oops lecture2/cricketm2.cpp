#include <iostream>
#include<vector>
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
    
     vector<cricketer> player;
     int x;
     cout<<"enter the number of player : "<<endl;
     cin>>x;
     for(int i=0;i<x;i++){
       
     }
}