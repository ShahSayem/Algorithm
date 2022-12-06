#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000005;


int fib(int  arr[], int n) //Top Down Approach -> Memoization
{
    if (n == 0 || n == 1){
        arr[n] = n;

        return arr[n];
    }

    if (arr[n] == -1){
        int a = fib(arr, n-2);
        int b = fib(arr, n-1);

        arr[n] = a+b;
    }

    return arr[n];
}

int main()
{   
    int n;
    cin>>n;

    int arr[n+1];
    memset(arr, -1, sizeof(arr));
    int ans = fib(arr, n);

    cout<<ans<<"\n";

    return 0;
} 