#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long val = 0;

        priority_queue<long long> pq;

        vector<long long> v(n);

        for (int i=0;i<n;i++)
        {
            if (s[i] == 'L')
            {
                v[i] = (i - 0);
                val = val + (i - 0);
            }
            else
            {
                v[i] = (n - 1 - i);
                val = val + (n - 1 - i);
            }
            if (i < n / 2)
            {
                if (s[i] != 'R')
                {
                    long long d = (n - i - 1) - v[i];
                    pq.push(d);
                }
            }
            else
            {
                if (s[i] != 'L')
                {
                    long long d = (i - 0) - v[i];
                    if (n % 2 != 0 && i == (n / 2))
                    {
                    }
                    else
                    {
                        pq.push(d);
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (!pq.empty())
            {
                val = val + pq.top();
                pq.pop();
            }
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}