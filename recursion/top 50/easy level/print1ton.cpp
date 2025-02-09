#include<iostream>
using namespace std;
// same for n to 1
void print(int n,int ini){
    if(ini>n) return;
  cout<<ini<<endl;
  print(n,ini+1);
}
int main(){
    int n;
    cout<<"enter the number n : ";
    cin>>n;
print(n,1);
}