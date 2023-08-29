#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> adj;

void addEdge(int u, int v){
    adj[u].push_back(v);
}


bool checkCycleUtil (int node, bool *visited, bool *inStack){

    if (inStack[node])
        return true;
    
    if (visited[node])
        return false;
    
    visited[node] = true;

    inStack[node] = true;

    for (int v : adj[node]){
        if (checkCycleUtil(v, visited, inStack))
            return true;
    }


    inStack[node] = false;

    return false;
}


bool checkCycle(int V, int E){
    bool visited[V]; 
    bool inStack[V]; 
    for(int i = 0; i < V; i++){
        visited[i] = false;
        inStack[i] = false;
    }
    

    for (int i = 0; i < V; i++){
        if (checkCycleUtil(i, visited, inStack)){
            return true;
        }
    }
    return false;

}
int main(){
    int V = 5, E = 7;

    adj.resize(V);
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 3);
    addEdge(4, 1);

    if(checkCycle(V, E))
        cout << "YES\n";
    else
        cout << "NO\n";
}
