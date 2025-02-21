#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        
        if(a < b)
            swap(a, b);
        int c = a - b;
        a -= 2 * c;
        b -= c;
        if(a % 3 == 0 && b % 3 == 0 && a >= 0 && b >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}