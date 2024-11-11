#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        priority_queue<int> p,q;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            p.push(x);
        }
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            q.push(x);
        }
        long long ans = 0;
        while(!p.empty() && !q.empty())
        {
            long long x = q.top()*h;
            if(x>p.top())
            {
                ans+=p.top();
            }
            else
            {
                ans+=x;
            }

            p.pop();q.pop();
        }
        cout <<ans<< endl;
    }
    return 0;
}