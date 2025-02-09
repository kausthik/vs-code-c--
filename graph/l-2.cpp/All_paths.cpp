#include<iostream>  
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;
int v;
 
void add_edge(int src , int des ){ // unweighted bidirectional graph
     graph[src].push_back(des);
     graph[des].push_back(src);
}

void all_paths(int curr, int des , unordered_set<int>& st, vector<int> v){
  if(curr==des){
    v.push_back(curr);
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
  }

  st.insert(curr);
  v.push_back(curr);

  for(auto ele : graph[curr]){
    if(st.find(ele)==st.end()){
      all_paths(ele,des,st,v);
    }
  }
  st.erase(curr);
     
}    

 
int main(){
    cout<<"Enter the number of vertices"<<endl;
    cin>>v;
    graph.resize(v+1,list<int> ());

   int e;
   cout<<"Enter number of edges"<<endl;
   cin>>e;

   while(e--){
    int s , d;
    cin>>s>>d;
    add_edge(s,d);
   }

   vector<int> v;
   unordered_set<int> st;
   cout<<endl; 
   cout<<"All the paths "<<endl;
   all_paths(0,6,st,v);

}