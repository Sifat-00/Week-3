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
        vector<int> v(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1)
        {
            cout<<"YES" << endl;
        }
        else if(mp.size()==2)
        {
            auto it = mp.find(0);

            if(it==mp.end())
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
        else cout <<"NO" << endl;
    }
    return 0;
}
