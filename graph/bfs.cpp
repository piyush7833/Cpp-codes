#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>
class graph{
    public:
    unordered_map<T,list <T> > adj;
    vector <vector<int> > adj2;
    void AdjEdge(T u,T v, bool diretion){
        // direction = 0 -> undirected graph
        // diretion = 1 -> directed graph
        // create an edge from u to v
        adj[u].push_back(v);
        if(diretion==0){
            adj[v].push_back(u);
        }
    }
    void BFS()
};
int main(){
int n ;
cout<<"Enter the number of nodes ";
cin>>n;
int m;
cout<<"Enter the number of edges ";
cin>>m;
graph <char> G;
for(int i=0;i<m;i++){
    char u,v;
    cin>>u>>v;
    G.AdjEdge(u,v,0); //undirected graph creation

}
return 0;
}

//push the node in queue and print it//explore its connected nodes and push it in queue  and print it and then go to next value of queue -> BFS
//push the node in stack and it will act like suspended value and print it //explore its connected nodes and push it in stack print it and then go to next value of stack and for backtracking use the last value inserted -> BFS