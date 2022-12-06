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
    if (F[n] == -1){
        if (n <= 1){
            F[n] = n;
            return F[n];
        }
        F[n] = fib(n-2)+fib(n-1);
        return F[n];
    }
    
    else 
        return F[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    memset(F, -1, sizeof(F));
    cout<<fib(n)<<"\n";

    return 0;
}
