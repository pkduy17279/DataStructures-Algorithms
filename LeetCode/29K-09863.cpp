#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mark[128];
        fill(mark, mark + 128, 0);
        int l = 0, res = 0;
        for(int r = 0; r < s.size(); r++) {
            while(mark[s[r]] > 0) {
                mark[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
            mark[s[r]]++;
        }
        return res;
    }
} solution;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << solution.lengthOfLongestSubstring("abcabcbb") << '\n';
    cout << solution.lengthOfLongestSubstring("bbbbb") << '\n';
    cout << solution.lengthOfLongestSubstring("pwwkew") << '\n';
    cout << solution.lengthOfLongestSubstring("") << '\n';
    cout << solution.lengthOfLongestSubstring(" ") << '\n';

    return 0;
}