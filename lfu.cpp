#include <bits/stdc++.h>
using namespace std;

// Enter number of frames: 3
// Enter number of pages: 20
// Enter reference string: 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1

int main()
{
    int nf;
    cout << "Enter number of frames: ";
    cin >> nf;
    int np;
    cout << "Enter number of pages: ";
    cin >> np;

    unordered_map<int, int> mp;
    vector<int> pages(np);
    vector<int> frames(nf, -1);

    cout << "Enter reference string: ";
    for (int i = 0; i < np; i++)
    {
        cin >> pages[i];
    }

    int fault = 0;

    for (int i = 0; i < np; i++)
    {
        auto it = find(frames.begin(), frames.end(), pages[i]);
        if (it == frames.end())
        {
            fault++;
            if (frames.size() == nf)
            {
                mp[frames[0]]--;
                frames.erase(frames.begin());
            }
            frames.push_back(pages[i]);
            mp[pages[i]]++;
            cout << "For page " << pages[i] << ":";
            for (auto x : frames)
            {
                cout << x << " ";
            }
            cout << " Fault\n";
        }
        else
        {
            cout << "For page " << pages[i] << ":";
            for (auto x : frames)
            {
                cout << x << " ";
            }
            cout << " Hit\n";
            mp[pages[i]]++;
            frames.erase(it);
            frames.push_back(pages[i]);
        }

        int k = frames.size() - 2;
        while (k > -1 && mp[frames[k]] > mp[frames[k + 1]])
        {
            swap(frames[k], frames[k + 1]);
            k--;
        }
    }
    cout << "Number of page faults: " << fault << endl;
}