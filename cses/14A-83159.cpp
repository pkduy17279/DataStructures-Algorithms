#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 7;
int n, x, a[N], val1, val2, pos1, pos2;
map<int, int> b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> x;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
    
    for(int i = 1; i <= n; i++) {
        if(b[x - a[i]]) {
            if(a[i] * 2 == x && b[a[i]] < 2) 
                continue;
            val1 = a[i];
            val2 = x - a[i];
            break;
        }
    }
    if(val1 == 0 && val2 == 0) 
        cout << "IMPOSSIBLE";
    else {
        for(int i = 1; i <= n; i++) {
            if(a[i] == val1 && !pos1) 
                pos1 = i;
            if(a[i] == val2) {
                if(val1 == val2) {
                    if(pos1 != i) {
                        pos2 = i;
                        break;
                    }
                } else {
                    pos2 = i;
                    break;
                }
            }
        }
        cout << pos1 << ' ' << pos2;
    }

    return 0;
}