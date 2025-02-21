#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> res;

void moveDisk(int number, int from, int to, int intermediary) {
    if(number == 1) {
        res.push_back({from, to});
        return;
    }
    moveDisk(number - 1, from, intermediary, to);
    moveDisk(1, from, to, intermediary);
    moveDisk(number - 1, intermediary, to, from);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    
    moveDisk(n, 1, 3, 2);
    cout << res.size() << "\n";
    for(auto [x, y] : res) 
        cout << x << " " << y << "\n";
    
    return 0;
}