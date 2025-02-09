#include<iostream>
using namespace std;
class player {
    private:
   int score;

   public:
   void setscore(int score){
        this->score=score;
   }
   int getscore(){
        return score;
   }
};
int main(){
     int n,score;
     cout<<"enter the number of players : ";
     cin>>n;
     cout<<endl;
     player player[n];
     for(int i=0;i<n;i++){
        cout<<"enter the player number "<<i<<" score"<<endl;
        cin>>score;
        player[i].setscore(score);
     }

    cout<<player[0].getscore()<<endl;
    cout<<player[1].getscore()<<endl;
    cout<<player[2].getscore()<<endl;
}