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
    int n;
    cin>>n;

    int list1[n];
    int LIS[n];

    for (int i = 0; i < n; i++){
        cin>>list1[i];
        LIS[i] = 1;
    }

    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if (list1[j] <= list1[i])
                LIS[i] = max(LIS[i], LIS[j]+1);
        }
    }
    cout<<*max_element(LIS, LIS+n);
    
    return 0;
}
