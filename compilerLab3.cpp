#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    int state = 0;
    char c;
    while (s[i] != '\0')
    {
        switch (state)
        {
        case 0:
            c = s[i++];
            if (c == 'a')
                state = 1;
            else if (c == 'b')
                state = 2;
            else
                state = 1;
            break;
        case 1:
            c = s[i++];
            if (c == 'a')
                state = 3;
            else if (c == 'b')
                state = 4;
            else
                state = 6;
            break;

        case 2:
            c = s[i++];
            if (c == 'a')
                state = 6;
            else if (c == 'b')
                state = 2;
            else
                state = 6;
            break;
        case 3:
            c = s[i++];
            if (c == 'a')
                state = 3;
            else if (c == 'b')
                state = 2;
            else
                state = 6;
            break;
        case 4:
            c = s[i++];
            if (c == 'a')
                state = 6;
            else if (c == 'b')
                state = 5;
            else
                state = 6;
            break;
        case 5:
            c = s[i++];
            if (c == 'a')
                state = 6;
            else if (c == 'b')
                state = 2;
            else
                state = 6;
            break;

        case 6:
            c = s[i++];
            // cout << "data = " << c << "state = " << state;
        }
    }
    if (state == 1 || state == 3)
    {
        cout << s << " Accepted through a*" << endl;
    }
    else if (state == 2 || state == 4)
    {
        cout << s << " Accepted through a*b+" << endl;
    }
    else if (state == 5)
    {
        cout << s << " Accepted through abb" << endl;
    }
    else
    {
        cout << s << " Not Accepted" << endl;
    }
}