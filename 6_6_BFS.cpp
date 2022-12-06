#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
vector <int> adj[1000][1000];
bool vis[1000];
queue <int> q;
int node, edge;

int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};


void bfs(int source)
{
    vis[source] = 1;
    cout<<source<<"\n";
    q.push(source);

    while (!q.empty()){
        int x = q.front();
        q.pop();

        for (int i = 0; i <= node; i++){
            if (adj[x][i] != 0 && vis[i] != 1){
                q.push(i);
                vis[i] = 1;
                cout<<i<<"\n";
            }
        }
        
    }  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int source;
    cin>>node>>edge>>source;

    int adj[node+1][node+1];

    memset(adj, 0, sizeof(adj));
    int u, v, w;
    for (int i = 1; i <= edge; i++){
        cin>>u>>v>>w;

        adj[u][v] = w;
        adj[v][u] = w;
    }

    bfs(source);

    return 0;
}
