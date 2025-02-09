#include<iostream>
using namespace std;
int main(){
    int a[100];
    char ch[7]={'M','T','W','T','F','S','s'};
    cout<<"january";
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<ch[i]<<"    ";
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            sum++;
            
            cout<<sum<<"    ";
            if(sum==31) break;
        }
        cout<<endl;
    }
}