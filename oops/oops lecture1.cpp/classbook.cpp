#include <iostream>
using namespace std;
class book
{
public: // access modifier
    string name;
    float price;
    int pages;

    int countbooks(int price,int n,book book[]){
        int count=0;
        for(int i=0;i<n;i++){
           if(book[i].price<price) count++;
        }
        return count;
    }

    bool presentornot(string name,int n,book book[]){
       bool flag=false;
        for(int i=0;i<n;i++){
           if(book[i].name==name) flag=true;
        }
        return flag;
    }
};
int main()
{
    int n,price=100;
    cout << "enter the number of books : ";
    cin >> n;
    book book[n];
    cout << endl;
    cout << "enter the data in the order of name , price and pages : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "enter player number " << i << " data . " << endl;
        cin >> book[i].name;
       //cin >> book[i].price;
       // cin >> book[i].pages;
    }
     string s="hcverma";
    //cout<<book[n].countbooks(price,n,book);
    cout<<book[n].presentornot(s,n,book);
}