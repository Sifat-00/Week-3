#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]]>1)
            {
                cnt=i+1;
                int val = v[i];
                mp[val]--;
            }
        }
       cout << cnt << endl;
    }
    return 0;
}