#include <bits/stdc++.h>
using namespace std;

class Pairs
{
public:
    string name;
    int number;

    Pairs(string name, int number)
    {
        this->name = name;
        this->number = number;
    }
};

class cmp
{
public:
    bool operator()(Pairs &l, Pairs &r)
    {
        if (l.name == r.name)
            return l.number < r.number;
        else
            return l.name > r.name;
    }
};

int main()
{
    priority_queue<Pairs, vector<Pairs>, cmp> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int number;
        cin >> name >> number;
        Pairs obj(name, number);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().number << endl;
        pq.pop();
    }

    return 0;
}