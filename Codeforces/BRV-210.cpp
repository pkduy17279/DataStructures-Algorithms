#include <bits/stdc++.h>
using namespace std; 

const int INF = 506;
int x1, x2, x3;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> x1 >> x2 >> x3;
    
    int mi = min({x1, x2, x3});
    int ma = max({x1, x2, x3});
    int res = INF;
    for(int i = mi; i <= ma; i++) 
        res = min(res, abs(x1 - i) + abs(x2 - i) + abs(x3 - i));
    cout << res;

    return 0;
}