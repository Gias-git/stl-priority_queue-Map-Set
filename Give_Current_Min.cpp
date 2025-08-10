#include <bits/stdc++.h>
using namespace std;

// void print_val(priority_queue<int, vector<int>, greater<int>> pq)
// {
//     cout << pq.top();
// }
int main()
{

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < N; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            int insert_Val;
            cin >> insert_Val;
            pq.push(insert_Val);

            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (command == 1)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else
        {
            if (!pq.empty())
                pq.pop();

            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
    }
    return 0;
}