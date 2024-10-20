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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v1(n + 1);
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    for (int i = 0; i < n + 1; i++)
    {
        cin >> v1[i];
        if (i != n)
            mx = max(mx, v1[i]);
    }

    int diff = INT_MAX;
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(v[i] - v1[n]) < diff)
        {
            diff = abs(v[i] - v1[n]);
            value = v[i];
        }
    }
    int ans = 0;
    if (diff == 0)
        ans += 1;
    else if (mx > mn)
    {
        ans += diff;
    }
    else
        ans += diff + 1;
    for (int i = 0; i < n; i++)
    {
        ans += abs(v[i] - v1[i]);
    }
    cout << ans << nline;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
