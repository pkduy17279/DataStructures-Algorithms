#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
string s[N];
int n;
map<string, int> mp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> s[i];
    
    for(int i = 1; i <= n; i++) {
        if(mp[s[i]] == 0) {
            cout << "OK\n";
            mp[s[i]]++;
        } else {
            cout << s[i] << mp[s[i]] << '\n';
            mp[s[i]]++;
        }
    }

    return 0;
}