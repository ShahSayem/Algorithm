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

    int m, n;
    cin>>m>>n;

    int profit[n];
    int weight[n];

    for (int i = 0; i < n; i++){
        cin>>profit[i]>>weight[i];
    }
    
    int v[n+1][m+1];
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++){
            if (i == 0 || j == 0)
                v[i][j] = 0; 
            else if (j >= weight[i-1])
                v[i][j] = max(v[i-1][j], v[i-1][j-weight[i-1]]+profit[i-1]);
            else 
                v[i][j] = v[i-1][j];
        }
    }

    cout<<v[n][m];

    return 0;
}
