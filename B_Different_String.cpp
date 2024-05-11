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
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }

        if (st.size() == 1)
            no;
        else
        {
            yes;
            string r;
            r = s;
            while (r == s)
                next_permutation(r.begin(), r.end());
            cout << r << endl;
        }
    }
}
