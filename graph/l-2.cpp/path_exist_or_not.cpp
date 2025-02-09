#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;
int v;

void add_edge(int src , int des ){
     graph[src].push_back(des); 
     graph[des].push_back(src);  
}

void display(){
     for(int i=0;i<v;i++){
       cout<<i<<" -> ";
       for(auto ele : graph[i]){
          cout<<ele<<" ";
       } 
     }
}

bool isPathPresent(unordered_set<int>& st , int current , int destination){
     if(current==destination) return true;

     for(auto ele : graph[current]){
        if(ele==destination) return true;
     }
      
      st.insert(current);

      bool ans=false;

     for(auto ele : graph[current]){
        if(st.find(ele)==st.end()){
        ans = ans |  isPathPresent(st, ele , destination);
        }
     }

     return ans;
     
}

void allPath(int src , int des , vector<int> store , vector<vector<int>>& ans , unordered_set<int>& mark ){
     if(src==des){
      store.push_back(src);
      ans.push_back(store);
     }

}

int main(){
    cin>>v;
    graph.resize(v,list<int>());

    int e;
    cin>>e;

    while(e--){
       int s , d;
       cin>>s>>d;
       add_edge(s,d);
    }

    unordered_set<int> st;

    cout<<"Is path is present "<<endl;

    cout<<isPathPresent(st, 3 , 5);

}