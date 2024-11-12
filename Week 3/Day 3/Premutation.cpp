#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            vector<int> x;
            for(int j=0;j<(n-1);j++)
            {
                int a;
                cin>>a;
                x.push_back(a);
            }
            v.push_back(x);
        }
        
        int x = n-1;
        vector<map<int,int>> mp;

        for(int i=0;i<x;i++)
        {
            map<int,int> m;
            for(int j=0;j<v.size();j++)
            {
                m[v[j][i]]++;
            }
            mp.push_back(m);
        }

        vector<int> ans(n);
        int sz = mp.size();
        for(int i =0;i<sz/2;i++)
        {

            vector<pair<int,int>> m;
            for(auto [val1,val2]:mp[i])
            {
                m.push_back({val2,val1});
            }

            sort(m.begin(),m.end());
            ans[i] = m[1].second;
            ans[i+1] = m[0].second;


            vector<pair<int,int>> z;
            for(auto [val1,val2]:mp[sz-i-1])
            {
                z.push_back({val2,val1});
            }

            sort(z.begin(),z.end());
            ans[n-i-1] = z[1].second;
            ans[n-i-2] = z[0].second;

        }

        for(int x:ans)
        {
            cout <<x<< " ";
        }
        cout<<endl;
    }
    return 0;
}