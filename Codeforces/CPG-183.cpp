#include <bits/stdc++.h>
using namespace std;

const int N = 506;
const int M = 1e5 + 7;
int n, m, a[N][N], sx[N], sy[N];
vector<int> prime;
bool mark[M];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
    }

    for(int i = 2; i <= sqrt((int)1e5); i++) {
        if(!mark[i]) {
            for(int j = i * i; j <= (int)1e5 + 3; j += i) {
                mark[j] = true;
            }
        }
    }
    for(int i = 2; i <= (int)1e5 + 3; i++) {
        if(!mark[i])
            prime.push_back(i);
    }
 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) 
            sx[i] += *lower_bound(prime.begin(), prime.end(), a[i][j]) - a[i][j];
    }
    for(int j = 1; j <= m; j++) {
        for(int i = 1; i <= n; i++) 
            sy[j] += *lower_bound(prime.begin(), prime.end(), a[i][j]) - a[i][j];
    }
    cout << min(*min_element(sx + 1, sx + 1 + n), *min_element(sy + 1, sy + 1 + m));

    return 0;
}