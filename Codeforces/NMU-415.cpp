#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int n, t[N], res = 2, cnt = 1, pre;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++) 
        cin >> t[i];
    
    for(int i = 2; i <= n; i++) {
        if(t[i] != t[i - 1]) {
            res = max(res, min(cnt, pre) * 2);
            pre = cnt;
            cnt = 1;
        } else 
            cnt++;    
    }
    res = max(res, min(cnt, pre) * 2);
    cout << res;

    return 0;
}