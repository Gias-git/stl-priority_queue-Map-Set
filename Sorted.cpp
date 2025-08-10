#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        set<int> s;
        int N;
        cin >> N;

        while (N--)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }

    return 0;
}