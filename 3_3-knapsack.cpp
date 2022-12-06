#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000005;

int main()
{   
    int n, m;
    cin>>n>>m;

    int profit[n];
    int weight[n];

    for (int i = 0; i <= n; i++){
        cin>>profit[i];
        cin>>weight[i];
    }
    
    int v[n+1][m+1];

    for (int i = 0; i <= n; i++){
        for (int w = 0; w <= m; w++){
            if (i == 0 || w == 0)
                v[i][w] = 0;
            else
                v[i][w] = max(v[i-1][w], v[i-1][w-weight[i]]+profit[i]);
        }
    }
    
    cout<<v[n][m];
    
    return 0;
} 