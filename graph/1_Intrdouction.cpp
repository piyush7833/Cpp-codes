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
    void AdjEdge2(int n bool diretion){
        for (int i=0;i<n;i++){
            adj2[i].push_back(i); 
            int u= edges[i][0];
            int v= edges[i][1];
            adj2[v].push_back[u];
            adj2[u].push_back[v];
        }
    }
    void print(){
        for (auto i:adj){
            cout<<i.first <<"->";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

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
G.print();
return 0;
}