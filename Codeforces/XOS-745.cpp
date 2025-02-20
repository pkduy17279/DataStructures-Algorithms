#include <bits/stdc++.h>
using namespace std;

int k, x = 19;

int cal(int a) {
    int cnt = 0;
    while(a > 0) {
        cnt += a % 10;
        a /= 10;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> k;
    
    for(int i = 1; i <= k; i++) {
        while(cal(x) != 10)
            x++;
        if(i != k)
            x++;
    }
    cout << x;

    return 0;
}