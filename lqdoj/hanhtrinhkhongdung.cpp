#include <bits/stdc++.h>
using namespace std;

long long w, l, x;

int main() {
    cin >> w >> l >> x;

    long long numerator = x * (w + l) - 100 * w;
    long long denominator = 100 - x;

    if (numerator <= 0) 
        cout << 0 << '\n';
    else
        cout << (numerator + denominator - 1) / denominator << '\n';

    return 0;
}