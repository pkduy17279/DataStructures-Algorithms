#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int n;
long long res = 1;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        res *= 2;
        res %= MOD;
    }
    cout << res;

    return 0;
}