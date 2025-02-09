
#include<iostream>
using namespace std;
void weekend(vector<int>& v,int k){
    for(int i=k;i<v.size();i+=7){
        v[i]=1;
        v[i+1]=1;
    }
}
int afweek(vector<int> v){
 int sum=0;
  for(int i=0;i<v.size();i++){
    if(v[i]!=0) sum+=1;
  }
  return sum;
}
int main(){
    vector<int> feb(29,0),march(31,0),april(30,0),may(31,0);
    feb[19]=1; // statehood day
    
    march[24]=1;  // holi
    march[28]=1;  // good friday

    april[10]=1; // eid
    april[20]=1; // mahavir jayanti
    
    may[22]=1; // buddha purnima

// weekend holidays
    
    weekend(feb,2);
    weekend(march,1);
    weekend(april,5);
    weekend(may,3);
  
cout<<"Total number of holidays in feburary : "<<afweek(feb)<<endl;
cout<<"Total number of holidays in march : "<<afweek(march)<<endl;
cout<<"Total number of holidays in april : "<<afweek(april)<<endl;
cout<<"Total number of holidays in may : "<<afweek(may)<<endl;

}