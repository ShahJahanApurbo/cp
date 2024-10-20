#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#include "apurbo.h"
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i - a >= 0 && dp[i - a] != -1)
        {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i - b >= 0 && dp[i - b] != -1)
        {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i - c >= 0 && dp[i - c] != -1)
        {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }
    cout << dp[n] << nline;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
