#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, res = 0, k;
    cin >> n >> k;
    vector<int> a(n + 1), sum(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
        if(sum[i] == k)
            res++;
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(sum[j] - sum[i] == k)
                res++;
        }
    }
    cout << res;
    return 0;
}
