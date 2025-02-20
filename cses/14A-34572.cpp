#include <bits/stdc++.h>
#define int long long
using namespace std; 

int n;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i == 1)
            cout << 0 << '\n';
        else if(i == 2)
            cout << 6 << '\n';
        else if(i == 3)
            cout << 28 << '\n';
        else if(i == 4)
            cout << 96 << '\n';
        else {
            int val = i * i;
            int res = val * (val - 1) / 2;
            int cnt = (i - 4) * (i - 4) * 8;
            cnt += 4 * 2 + 3 * 8 + (i - 4) * 16;
            cnt += 4 * 4 + (i - 4) * 6 * 4;
            cnt /= 2;
            res -= cnt;
            cout << res << '\n';
        }
    }

    return 0;
}