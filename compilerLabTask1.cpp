#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int i = 0;
    int state = 0;

    // a+b*+c[U+201f]

    while (s[i] != '\0')
    {
        switch (state)
        {
        case 0:
            if (s[i] == 'a')
                state = 1;
            else
                state = 6;
            break;
        case 1:
            if (s[i] == 'a')
                state = 1;
            else if (s[i] == 'b')
                state = 2;
            else if (s[i] == 'c')
                state = 3;
            else
                state = 6;
            break;
        case 2:
            if (s[i] == 'a')
                state = 6;
            else if (s[i] == 'b')
                state = 2;
            else if (s[i] == 'c')
                state = 3;
            else
                state = 6;
            break;
        case 3:
            if (s[i] == 'a')
                state = 6;
            else if (s[i] == 'b')
                state = 6;
            else if (s[i] == 'c')
                state = 3;
            else if (s[i] == '"')
                state = 4;
            else
                state = 6;
            break;
        case 4:
            if (s[i] != '"' && s[i + 1] == '\0')
                state = 6;
            else if (s[i] == '"')
                state = 5;
            else if (s[i] != '"')
                state = 4;
            break;
        case 5:
            state = 6;
            break;
        case 6:
            i++;
            break;
        }
        i++;
    }
    cout << "state = " << state << endl;
    cout << "i = " << i << endl;
    if (state != 6)
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}