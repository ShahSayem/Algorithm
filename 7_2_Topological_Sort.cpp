#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int adj[1000][1000];
bool vis[1000];
queue <int> q;
int node, edge;
stack <int> st;

int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void dfs(int source)
{
    vis[source] = 1;
    cout<<source<<" ";

    for (int i = 1; i <= node; i++){
        if (vis[i] == 0 && adj[source][i] == 1){
            dfs(i);
            st.push(i);
        }
    } 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    cin>>node>>edge;

    int u, v;
    for (int i = 1; i <= edge; i++){
        cin>>u>>v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for (int i = 1; i <= edge; i++){
        if (vis[i] == 0){
            dfs(i);
            st.push(i);
        }
    }

    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    

    return 0;
}