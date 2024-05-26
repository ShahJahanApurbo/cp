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
int cc(int num, vector<int> &a)
{
    int findMin = 0, findCurrent, getPrevious = 0;
    if (a[0] >= num)
    {
        findCurrent = 1;
    }
    else
    {
        findCurrent = -1;
    }
    for (int i = 1; i < a.size(); ++i)
    {
        findMin = min(findMin, getPrevious);
        getPrevious = findCurrent;
        if (a[i] >= num)
        {
            findCurrent++;
        }
        else
        {
            findCurrent--;
        }
        if (findCurrent - findMin > 0)
        {
            return 1;
        }
    }
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int res = min(a[0], a[1]);
    for (int i = 1; i < n - 1; i++)
    {
        int tem[3] = {a[i - 1], a[i], a[i + 1]};
        sort(tem, tem + 3);
        int c = tem[1];
        res = max(res, c);
    }
    cout << res << endl;
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
