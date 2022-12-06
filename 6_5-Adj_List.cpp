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

    int node, edge, u, v, w;
    cin>>node>>edge;
    vector < pair <int, int> > adj[edge];
    for (int i = 1; i <= edge ; i++){
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    
    for (int i = 0;i < edge;i++){
        cout<<i<<"=> ";
        for (int j = 0;j <adj[i].size(); i++){
            cout<<adj[i][j].first<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}
