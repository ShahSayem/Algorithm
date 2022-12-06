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
    string s1, s2;
    cin>>s1>>s2;

    int m = s1.size(), n = s2.size();

    s1 = " "+s1;
    s2 = " "+s2;

    int edit[n+1][m+1];
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= m; j++){
            if (j == 0)
                edit[i][j] = i;

            else if(i == 0)
                edit[i][j] = j;

            else if (s1[j] == s2[i]) 
                edit[i][j] = edit[i-1][j-1];
            
            else {
                int x = min(edit[i-1][j], edit[i][j-1]);
                int y = min(edit[i-1][j-1], x);
                edit[i][j] = 1+y;
            }
        }
    }
    cout<<edit[n][m];

    return 0;
}
