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


ll F[100];

ll fib(int n)
{
    F[0] = 0;
    F[1] = 1;
    
    for (int i = 2; i <= n; i++){
        F[i] = F[i-2]+F[i-1];
    }
    
    return F[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    cout<<fib(n)<<"\n";

    return 0;
}
