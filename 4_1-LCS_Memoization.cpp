#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000005;

int main()
{   
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int n = s1.size(), m = s2.size();
    int LCS[n+1][m+1];
    memset(LCS, 0, sizeof(LCS));

    for (int i = 0; i < n; i++){
        LCS[i][0] = 0;
    }
    for (int j = 0; j < m; j++){
        LCS[0][j] = 0;
    }

    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++){
            if (s1[i-1] == s2[j-1])
                LCS[i][j] = 1 + LCS[i-1][j-1];
            else 
                LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
        }
    }
    
    cout<<LCS[n-1][m-1]<<"\n";

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<LCS[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
} 