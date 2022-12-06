#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void selectionSort(vector <int> v)
{
    int n = v.size(), cnt = 0, minIndex;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (v[i] > v[j])
                swap(v[i], v[j]);
        }
    } 

    for (int k = 0; k < n; k++){
        cout<<v[k]<<" ";
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }   

    selectionSort(v);

    return 0;
} 