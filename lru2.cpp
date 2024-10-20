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

    vector<int> pages(np);
    cout << "Enter reference string: ";
    for (int i = 0; i < np; i++)
    {
        cin >> pages[i];
    }
    vector<int> frames(nf, -1);
    deque<int> dq(nf, -1);
    int fault = 0;
    int hit = 0;

    for (int i = 0; i < np; i++)
    {
        int flag = 0;
        auto it = find(frames.begin(), frames.end(), pages[i]);
        if (it == frames.end())
        {
            fault++;
            if (dq.size() == nf)
            {

                int x = dq.front();
                dq.pop_front();
                auto it2 = find(frames.begin(), frames.end(), x);
                frames.erase(it2);
                frames.push_back(pages[i]);
            }
            else
            {
                frames.push_back(pages[i]);
            }
            cout << "For page " << pages[i] << ":";
            for (auto x : frames)
            {
                cout << x << " ";
            }
            cout << " Fault\n";
        }
        else
        {
            hit++;
            auto it2 = find(dq.begin(), dq.end(), pages[i]);
            dq.erase(it2);
            cout << "For page " << pages[i] << ":";
            for (auto x : frames)
            {
                cout << x << " ";
            }
            cout << " Hit\n";
        }
        dq.push_back(pages[i]);
    }
    cout << "Total number of page faults: " << fault << endl;
}