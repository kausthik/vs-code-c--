#include<iostream>
#include<list>
#include<vector>
#include<unordered_set>
#include<queue>

using namespace std;

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
      int s,d;
      cin>>s>>d;
      add_edge(s,d);
   }

   vector<int> dist(v,INT_MAX);

   queue<int> que;
   unordered_set<int> st;

   // source is 0
   int src;
   cout<<"Enter the source "<<endl;
   cin>>src;

   que.push(src);
   st.insert(src);
   dist[src]=0;

   while(!que.empty()){
      int top=que.front();
      que.pop();
      for(auto ele : graph[top]){ 
        if(not st.count(ele)){
          que.push(ele);
          st.insert(ele);
          dist[ele]=dist[top]+1; 
        }
      }
   }

   for(int i=0;i<dist.size();i++){
    cout<<"Minimum distance of "<<i<<" from zero is "<<dist[i]<<endl;
   }

}