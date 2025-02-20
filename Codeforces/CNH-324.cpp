#include <bits/stdc++.h>
using namespace std;

const int N = 57;
const int INF = 1e9 + 7;
int n, w[2 * N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= 2 * n; i++) 
        cin >> w[i];
    
    int res = INF;
    for(int i = 1; i < 2 * n; i++) {
        for(int j = i + 1; j <= 2 * n; j++) {
            vector<int> tandem;
            for(int k = 1; k <= 2 * n; k++) {
                if(k == i || k == j) 
                    continue;
                tandem.push_back(w[k]);
            }
            sort(tandem.begin(), tandem.end());
            int cnt = 0;
            for(int l = 0; l < tandem.size(); l += 2)
                cnt += tandem[l + 1] - tandem[l]; 
            res = min(res, cnt);
        }
    }
    cout << res;

    return 0;
}