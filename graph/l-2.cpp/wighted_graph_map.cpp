#include<iostream>  
#include<vector>
#include<unordered_map>
using namespace std;

vector<unordered_map<int,int> > graph;
int v;
 
void add_edge(int src , int des , int wt){ // unweighted bidirectional graph
    graph[src][des]=wt;
}

void display(){
    for(int i=0;i<=v;i++){
      cout<<i<<" -> ";
     for(auto ele : graph[i]){
      cout<<"("<<ele.first<<","<<ele.second<<")";
     }
      cout<<endl;
    }
}

 
int main(){
    cout<<"Enter the number of vertices"<<endl;
    cin>>v;
    graph.resize(v+1);

   int e;
   cout<<"Enter number of edges"<<endl;
   cin>>e;

   while(e--){
    int s , d , wt;
    cin>>s>>d>>wt;
    add_edge(s,d,wt);
   }
   display();

   return 0;

}