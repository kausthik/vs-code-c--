#include<iostream>
#include<array>
// in this code we print the path of the maze

using namespace std;
int ways(int row,int col,int endr,int endc){
    if(row>endr || col>endc) return 0;
    if(row==endr && col==endc) return 1;
   int ans1=ways(row+1,col,endr,endc);
   int ans2=ways(row,col+1,endr,endc);
   return ans1+ans2;

}
void print(int row,int col,int endr,int endc,int k,char ch[]){
    if(row>endr || col>endc) return;
    if(row==endr && col==endc){
        for(int i=0;i<k;i++){
            cout<<ch[i];
        }
        cout<<endl;
       return;
       
    } 
    if(row<endr) ch[row+col-2]='D';
    print(row+1,col,endr,endc,k,ch);
    if(col<endc) ch[row+col-2]='R';
    print(row,col+1,endr,endc,k,ch);
}

int main(){
    int row=1,col=1,endr,endc;
    cout<<"enter the values : ";
    cin>>endr>>endc;
    int k=endr+endc-2;
     char ch[k];
     cout<<"the total number of ways are : ";
 cout<<ways(row,col,endr,endc);
 cout<<endl;
     cout<<"the ways are : "<<endl;
 print(row,col,endr,endc,k,ch);
    
}
