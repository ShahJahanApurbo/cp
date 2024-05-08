#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define for0(n) for (int i = 0; i < n; i++)
#define for1(n) for (int i = 1; i <= n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> prefix(n, 0), suffix(n, 0);
        set<char> se;
        for0(n)
        {
            se.insert(s[i]);
            prefix[i] = se.size();
        }
        se.clear();
        for (int i = n - 1; i >= 0; i--)
        {
            se.insert(s[i]);
            suffix[i] = se.size();
        }

        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, prefix[i] + suffix[i + 1]);
        }
        cout << ans << endl;
    }
}