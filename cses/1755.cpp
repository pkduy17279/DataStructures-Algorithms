#include <bits/stdc++.h>
using namespace std;

string s, res, middle;
int cnt[26];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s;
    
    for(char i : s) 
        cnt[i - 'A']++;
    
    for(int i = 0; i < 26; i++) {
        if(cnt[i] % 2) 
            middle += (char)('A' + i);
    }
    if(middle.size() >= 2) 
        cout << "NO SOLUTION";
    else {
        for(int i = 0; i < 26; i++) {
            for(int j = 1; j <= cnt[i] / 2; j++) 
                res += (char)('A' + i);
        }
        res += middle;
        for(int i = 25; i >= 0; i--) {
            for(int j = 1; j <= cnt[i] / 2; j++) 
                res += (char)('A' + i);
        }
        cout << res;
    }

    return 0;
}