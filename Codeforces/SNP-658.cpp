#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
const long long INF = 1e15 + 7;
int n, m, p[N];
long long d[N];
vector<pair<int, int>> adj[N];

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    fill(d + 2, d + 1 + n, INF);
    fill(p + 1, p + 1 + n, -1);
    q.push({0, 1});
    while(!q.empty()) {
        long long d_u = q.top().first;
        int u = q.top().second;
        q.pop();
        if(d_u != d[u])
            continue;
        for(auto edge: adj[u]) {
            int v = edge.first, len = edge.second;
            if(d[u] + len < d[v]) {
                d[v] = d[u] + len;
                p[v] = u;
                q.push({d[v], v});
            }
        }
    }
    if(d[n] == INF)
        cout << -1;
    else {
        int node = n;
        vector<int> res;
        while(node != -1) {
            res.push_back(node);
            node = p[node];
        }
        for(int i = res.size() - 1; i >= 0; i--)
            cout << res[i] << ' ';
    }
    
    return 0;
}