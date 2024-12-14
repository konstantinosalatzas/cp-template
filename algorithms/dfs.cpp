#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int v) {
    visited[v]=true;
    for(int u : adj[v]) {
        if(!visited[u]) {
            cout<<u<<' ';
            dfs(u);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin>>n;
    adj.resize(n);
    visited.resize(n);
    srand(time(NULL));
    for(int v=0; v<n; v++) {
        for(int u=0; u<n; u++) {
            if((u!=v)&&(rand()%2)) {
                adj[v].push_back(u);
            }
        }
        visited[v]=false;
    }
    for(int v=0; v<n; v++) {
        if(!visited[v]) {
            dfs(v);
        }
    }
    cout<<'\n';
    return 0;
}
