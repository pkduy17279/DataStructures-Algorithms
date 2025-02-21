#include <bits/stdc++.h>
using namespace std;

int n;

vector<string> GenerateGrayCode(int x) {
    if(x == 1) {
        return {"0", "1"};
    }
    vector<string> pre = GenerateGrayCode(x - 1), res;
    for(string s : pre)
        res.push_back("0" + s);
    for(int i = pre.size() - 1; i >= 0; i--)
        res.push_back("1" + pre[i]);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    
    vector<string> res = GenerateGrayCode(n);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << "\n";
    }

    return 0;
}