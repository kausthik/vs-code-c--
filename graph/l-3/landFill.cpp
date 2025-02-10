#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int ini;
int color;
vector<vector<int> > image;

void helper(int r , int c , unordered_set<int>& st){
        if(r<0 || r>=image.size() || c<0 || c>=image[0].size()) return;

        if(image[r][c]==ini){
          image[r][c]=color;
          for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
              cout<<image[i][j]<<" ";
            }
            cout<<endl;
          }
          st.insert(r*image[0].size()+c);
          if(st.find((r+1)*image[0].size()+c)==st.end()) helper(r+1,c,st);
          if(st.find((r-1)*image[0].size()+c)==st.end()) helper(r-1,c,st);
          if(st.find(r*image[0].size()+c+1)==st.end()) helper(r,c+1,st);
          if(st.find(r*image[0].size()+c-1)==st.end()) helper(r,c-1,st);
        }
  }

int main(){

  int rows, cols, sr, sc;
  cout << "Enter number of rows: ";
  cin >> rows;
  cout << "Enter number of columns: ";
  cin >> cols;

  image.resize(rows, vector<int>(cols));
  cout << "Enter the image matrix:\n";
  for(int i = 0; i < rows; ++i) {
    for(int j = 0; j < cols; ++j) {
      cin >> image[i][j];
    }
  }

  cout << "Enter the starting row and column: ";
  cin >> sr >> sc;
  cout << "Enter the new color: ";
  cin >> color;

  ini = image[sr][sc];
  unordered_set<int> st;
  helper(sr, sc, st);

}