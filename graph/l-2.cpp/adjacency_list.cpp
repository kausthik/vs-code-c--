#include<iostream>  
#include<vector>
#include<list>
using namespace std;

vector<list<int> > graph;
int v;
 
void add_edge(int src , int des ){ // unweighted bidirectional graph
     graph[src].push_back(des);
     graph[des].push_back(src);
}

void display(){
    for(int i=0;i<=v;i++){
      cout<<i<<" -> ";
     for(auto ele : graph[i]){
      cout<<ele<<" ";
     }
      cout<<endl;
    }
}

 
int main(){
    cout<<"Enter the number of vertices"<<endl;
    cin>>v;
    graph.resize(v+1,list<int> ( ));

   int e;
   cout<<"Enter number of edges"<<endl;
   cin>>e;

   while(e--){
    int s , d;
    cin>>s>>d;
    add_edge(s,d);
   }
   display();

   return 0;

}