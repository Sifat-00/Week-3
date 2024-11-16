#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        cin>>n>>k>>q;
        vector<int> v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        vector<int> ans;

        int l =0;
        long long cnt = 0;
        while(l<n)
        {
            if(v[l]<=q)
            {
                cnt++;
            }
            else
            {
                ans.push_back(cnt);
                cnt = 0;
            }
            l++;
        }
        ans.push_back(cnt);
        long long  anss = 0;
        for(int val:ans)
        {
            if(val==0 || val<k)
            {
                continue;
            }
           long long x = val-k+1;
           long long sum = (x*(x+1))/2;
            anss+=sum;
        }
        cout <<anss<<  endl;
    }
    return 0;
}