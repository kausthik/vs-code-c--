#include<iostream>
using namespace std;
// fuction to make zero
// not done
void mkzero(int pi,int qj,int row,int col,int m,float a[100][100]){
      for(int i=pi;i<row;i++){
         float s=a[i][qj];
    for(int j=qj;j<col;j++){
   a[i][j]=a[i][j]-(s*a[m][j]);
    }
}
   return;
}

// function to make one 
void mkone(int m,int qj,int col,float a[100][100]){
   float s=a[m][qj];
     for(int j=qj;j<col;j++){
      if(s==0 || s==1) break;
        a[m][j]=(a[m][j]/s);
     }
     return;
}
int main(){
    float a[100][100];
    int row,col;
    int i,j;
    // input the rows and columns
    cout<<"enter the rows : ";
    cin>>row;
    cout<<"enter the columns : ";
    cin>>col;
    // input the matrix
    cout<<"Enter the matrix : ";
    cout<<endl;
    for( i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>a[i][j];
        }
}
// pi is for initial row
//qj is for initial column
//m is giving for initial row
   int pi=1,qj=0,m=0;
   for(int k=1;k<row;k++){
   mkone(m,qj,col,a);
   mkzero(pi,qj,row,col,m,a);
   m++;
   qj++;
   pi++;
   cout<<"the result of the  operation is :";
   cout<<endl;
   for(i=0;i<row;i++){
    for(j=0;j<col;j++){
     cout<<a[i][j]<<"\t";
    }
    cout<<endl;


   }
   }

//    cout<<"the result of the  operation is :";
//    cout<<endl;
//    for(i=0;i<row;i++){
//     for(j=0;j<col;j++){
//      cout<<a[i][j]<<"\t";
//     }
//     cout<<endl;
// }

 // we want to find the rank of the matrix
 int total=0;
 int nul=0;
  for(int i=0;i<row;i++){
     for(int j=0;j<col;j++){
        if(a[i][j]==0) total+=1;
     }
     if(total==col){
        nul+=1;
     }
     total=0;
  }
  //print the rank of the matrix
  cout<<endl;
  cout<<"The rank of the given matrix is : ";
  cout<<endl;
  cout<<row-nul;
  //thank you..

}
