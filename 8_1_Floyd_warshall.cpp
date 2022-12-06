#include<bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
    int node, edge, u, v, w; 
    cin>>node>>edge; 
 
    long long int A[node+1][node+1]; 
    memset(A, 0, sizeof(A)); 
 
    for(int i = 1; i <= edge; i++) { 
        cin>>u>>v>>w; 
        A[u][v] = w; 
    } 
 
    for(int i = 1; i <= node; i++) { 
        for(int j = 1; j <= node; j++) { 
            if(A[i][j] == 0) { 
                if(i == j) 
                    continue; 
                else 
                    A[i][j] = INT_MAX; 
            } 
        } 
    } 
    cout<<"\n"; 

    for(int i = 1; i <= node; i++) { 
        for(int j = 1; j <= node; j++) { 
            cout<<A[i][j]<<" "; 
        } 
        cout<<"\n"; 
    } 
    cout<<"\n"; 
 
    for(int k = 1; k <= node; k++) { 
        for(int i = 1; i <= node; i++) { 
            for(int j = 1; j <= node; j++) { 
                A[i][j] = min(A[i][j], A[i][k]+A[k][j]); 
            } 
        } 
 
        for(int i = 1; i <= node; i++) { 
            for(int j = 1; j <= node; j++) { 
                cout<<A[i][j]<<" "; 
            } 
            cout<<"\n"; 
        } 
        cout<<"\n"; 
    } 
}