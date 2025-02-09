#include<iostream>
using namespace std;
// reverse first half of the string
void rev(int i,int j,int n,char s[]){
    while(i<j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"enter the even length : ";
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    rev(0,n/2-1,n,s);
    cout<<s;

}