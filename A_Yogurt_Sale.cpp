#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (n & 1)
        {
            cout << min(a * n, (n / 2) * b + a) << endl;
        }
        else
        {
            cout << min(a * n, (n / 2) * b) << endl;
        }
    }
}