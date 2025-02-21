#include <bits/stdc++.h>
using namespace std;

string s;
set<string> res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> s;

    sort(s.begin(), s.end());
    res.insert(s);
    while(next_permutation(s.begin(), s.end())) 
        res.insert(s);
    cout << res.size() << '\n';
    for(string i : res)
        cout << i << '\n';
    
    return 0;
}