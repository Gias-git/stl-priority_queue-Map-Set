#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;

        map<string, int> mp;
        string maxword;
        int maxCount = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxword = word;
            }
        }
        cout << maxword << " " << maxCount << endl;
    }

    return 0;
}