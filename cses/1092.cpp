#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    if((long long)n * (n + 1) / 2 % 2) 
        cout << "NO\n";
    else {
        vector<int> a, b;
        long long suma = 0, sumb = 0;
        for(int i = n; i >= 1; i--) {
            if(suma <= sumb) {
                a.push_back(i);
                suma += i;
            } else {
                b.push_back(i);
                sumb += i;
            }
        }
        cout << "YES" << '\n';
        cout << a.size() << '\n';
        for(int i : a)
            cout << i << ' ';
        cout << '\n';
        cout << b.size() << '\n';
        for(int i : b)
            cout << i << ' ';
    }

    return 0;
}