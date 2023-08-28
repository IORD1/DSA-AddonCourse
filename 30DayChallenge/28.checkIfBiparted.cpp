#include<bits/stdc++.h>
using namespace std;



void checkIfBipartite(int G[][4], int src)
{

    int colorArr[4];
    for (int i = 0; i < 4; ++i)
        colorArr[i] = -1;
 
    colorArr[src] = 1;
 

    queue <int> q;
    q.push(src);
 

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
 
        if (G[u][u] == 1){
            cout<<"--------------"<<endl;
            cout<<"It's not a bipartite graph"<<endl;
            return;
        }
 
        for (int v = 0; v < 4; ++v)
        {
            if (G[u][v] && colorArr[v] == -1)
            {
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }
 
            else if (G[u][v] && colorArr[v] == colorArr[u]){
                cout<<"--------------"<<endl;
                cout<<"It's not a bipartite graph"<<endl;
                return;
            }
        }
    }

    cout<<"-----------------"<<endl;
    cout<<"It's a bipartite graph"<<endl;
    return ;
}

int main(){
    int graph[][4] = {
        {1,0,0,1},
        {1,0,1,0},
        {0,1,0,1},
        {1,0,1,0}
    };

    checkIfBipartite(graph[][4],0);
}