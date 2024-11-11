#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string ans;
    vector<string> v;
    while(t--)
    {
        string ar;
        cin >> ar;
        v.push_back(ar);
    }   
    reverse(v.begin(),v.end());
    unordered_set<string> mp;
    vector<string> track;
    for(auto x : v)
    {
        if(mp.find(x) == mp.end())
        {
            track.push_back(x);
            mp.insert(x);
        }
    }
    for(auto x : track)
    {
        ans+=x.substr(x.size()-2);
    }
    cout << ans << endl;
    return 0;
}