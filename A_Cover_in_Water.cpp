#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back

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

        int cnt = 0;
        for (int i = 2; i < n; i++)
        {
            if (s[i] == '.' && s[i - 1] == '.' && s[i - 2] == '.')
                cnt += 3;
        }
        if (cnt >= 3)
            cout << 2 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                    cnt++;
            }
            cout << cnt << endl;
        }
    }
}