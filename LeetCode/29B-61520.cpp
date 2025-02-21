#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int reverse(int x) {
            int res = 0;
            while (x != 0) {
                if(INT_MIN / 10 > res || res > INT_MAX / 10)
                    return 0;
                res = res * 10 + x % 10;
                x /= 10;
            }
            return res;
        }
} solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << solution.reverse(123) << '\n';
    cout << solution.reverse(-123) << '\n';
    cout << solution.reverse(120) << '\n';
    cout << solution.reverse(1534236469) << '\n';

    return 0;
}