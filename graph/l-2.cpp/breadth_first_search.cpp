#include<iostream>  
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

// in breadth first search we travel the immediate neighbour first...  


vector<list<int> > graph;
int v;
 
void add_edge(int src , int des ){ 
     graph[src].push_back(des);
     graph[des].push_back(src);
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

   queue<int> que;
   unordered_set<int> st;
   que.push(0);
   st.insert(0);

   while(!que.empty()){ // breadth first search 
     int top=que.front();
     cout<<top<<" ";
     que.pop();
     
     for(auto ele : graph[top]){
      if(st.find(ele)==st.end()) {
        que.push(ele);
        st.insert(ele);
      }
     }
   }
   
}