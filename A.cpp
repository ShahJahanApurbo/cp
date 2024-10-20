#include <bits/stdc++.h>
using namespace std;

void isLightOn(long long bulbNumber)
{
    long long root = sqrt(bulbNumber);
    if (root * root == bulbNumber)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

void solve()
{
    long long n;
    cin >> n;
    while (n != 0)
    {
        isLightOn(n);
        cin >> n;
    }
}

int main()
{

    solve();
}