#include<bits/stdc++.h>
using namespace std;

void Solve()
{
    int n,k;
    cin >> n >> k;
    string ar;
    cin >> ar;
    int cnt = 0;
    int l=0,r=k;
    for(int i=l;i<r;i++)
    {
        if(ar[i] == 'W') cnt++;
    }
    int mn = cnt;
    for (int i = k; i < n; i++)
    {
        if (ar[i - k] == 'W') cnt--;
        if (ar[i] == 'W') cnt++;
        mn = min(mn, cnt);
    }
    
    cout << mn << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        Solve();
    }
    return 0;
}
