#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
const int MOD = 1e9 + 7;
int n, a[N];
long long sum, cnt, res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 1) {
            sum += a[i];
            sum %= MOD;
            cnt++;
        }
    }
    
    for(int i = 1; i <= n; i++) {
        if(a[i] % 2 == 0) {
            res += (sum + ((a[i] * cnt) % MOD) % MOD);
            res %= MOD;
        }
    }
    cout << res;

    return 0;
}