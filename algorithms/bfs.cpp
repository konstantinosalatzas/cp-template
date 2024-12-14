#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> adj;
queue<int> q;
vector<bool> visited;

void bfs(int s) {
    q.push(s);
    visited[s]=true;
    while(!q.empty()) {
        int v;
        v=q.front();
        q.pop();
        for(int u:adj[v]) {
            if(!visited[u]) {
                visited[u]=true;
                q.push(u);
                cout<<u<<' ';
            }
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
    }
    for(int v=0; v<n; v++) {
        visited[v]=false;
    }
    for(int v=0; v<n; v++) {
        if(!visited[v]) {
            bfs(v);
        }
    }
    cout<<'\n';
    return 0;
}
