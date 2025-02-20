#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;
int ntests, n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> ntests;
    while(ntests--) {
        cin >> n;

        int res = INF;
        for(int i = 1; i <= ceil(sqrt(n)); i++)
            res = min(res, i - 1 + n / i - 1 + (n % i != 0));
        cout << res << '\n'; 
    }

    return 0;
}