#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    mp["tamim"] = 2; // logn
    mp["ramin"] = 7;
    mp["shamim"] = 9;

    for (auto it = mp.begin(); it != mp.end(); it++) // O(nlogn)
    {
        cout << it->first << " " << it->second << endl; // logn
    }

    if (mp.count("ramin"))
        cout << "Ache";
    else
        cout << "Nai";
    return 0;
}