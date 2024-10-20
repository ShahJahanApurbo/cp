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
    int n, m;
    cin >> n >> m;
    vector<int> v1(n + m + 1);
    vector<int> v2(n + m + 1);

    vector<pair<pair<int, int>, bool>> v;

    for (int i = 0; i < n + m + 1; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n + m + 1; i++)
    {
        cin >> v2[i];
    }

    for (int i = 0; i < n + m + 1; i++)
    {
        v.push_back({{v1[i], v2[i]}, false});
    }

    for (int i = 0; i < n + m + 1; i++)
    {
        ll sum = 0;
        sort(v.begin(), v.end(), [](pair<pair<int, int>, bool> a, pair<pair<int, int>, bool> b)
             { return a.ff.ff > b.ff.ff; });
        for (int i = 0; i < n; i++)
        {
            sum += v[i].ff.ff;
            v[i].ss = true;
        }
        sort(v.begin(), v.end(), [](pair<pair<int, int>, bool> a, pair<pair<int, int>, bool> b)
             { return a.ff.ss > b.ff.ss; });
        for (int i = 0; i < m; i++)
        {
            if (!v[i].ss)
                sum += v[i].ff.ss;
        }
        cout << sum << " ";
    }
    cout << nline;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
