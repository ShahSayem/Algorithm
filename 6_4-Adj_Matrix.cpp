#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int node, edge;
    cin>>node>>edge;

    int adj[node+1][node+1];

    memset(adj, 0, sizeof(adj));
    int u, v, w;
    for (int i = 1; i <= edge; i++){
        cin>>u>>v>>w;

        adj[u][v] = w;
        adj[v][u] = w;
    }

    for (int i = 1; i <= node; i++){
        for (int j = 1; j <= node; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}
