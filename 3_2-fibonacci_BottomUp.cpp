#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000005;

int main()
{   
    int n;
    cin>>n;

    int F[n+1];

    F[0] = 0;
    F[1] = 1;

    for (int i = 2; i <= n; i++){
        F[i] = F[i-1]+F[i-2];
    }

    cout<<F[n]<<"\n";

    return 0;
} 