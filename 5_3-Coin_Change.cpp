#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

int main()
{
    int m;
    cin>>m;

    int n;
    cin>>n;
    int coins[n];

    for (int i = 0; i < n; i++){
        cin>>coins[i];
    }

    int mincoin[n+1][m+1];
    for (int i = 0; i < n+1; i++){
        mincoin[i][0] = 0;
    }
    for (int j = 0; j < m+1; j++){
        mincoin[0][j] = INT_MAX;
    }

    for (int i = 1; i < n+1; i++){
        for (int j = 1; j < m+1; j++){
            if (j >= coins[i-1]){
            mincoin[i][j] = min(mincoin[i-1][j], 1+mincoin[i][j-coins[i-1]]);
            }
            else {
                mincoin[i][j] = mincoin[i-1][j];
            }
        }

        for (int k = 0; k < n+1; k++){
            for (int l = 0; l < m+1; l++){
                cout<<mincoin[k][l]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }

    return 0;
}
