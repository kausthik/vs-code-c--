#include<iostream>
using namespace std;
// sum of digit function
float sum(int digit){
   float sum=0.0;
   while(digit>0){
   sum=sum+digit%10;
   // then digit is divided by 10
   digit/=10;
   }
  return sum;
}
int main(){
    float min=1000;
    int idx=0;
    for(int  i=100;i<1000;i++){
        float k=i/sum(i);
      float p=max(min,k);
       if(p==min){
        min=k;
        idx=i;
       }
    }
    cout<<"THE THREE DIGIT NUMBER IS : "<<endl;
    cout<<idx;
    cout<<endl;
    cout<<"THE DIFFERENCE BETWEEN HUNDREDS AND ONES PLACE IS : ";
    cout<<endl;
    // for three number digit
    int ans=idx/100-idx%10;
    if(ans<0) cout<<-(ans);
    else cout<<ans;

}