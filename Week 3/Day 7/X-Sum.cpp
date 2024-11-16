#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> v;
long long s(int i,int j,int x,int y)
{
    long long ans = 0;
    i+=x;
    j+=y;
    while(i>=0 && j>=0 && i<n && j<m)
    {
        ans+=v[i][j];
        i+=x;
        j+=y;
    }
    return ans;
}

vector<pair<int,int>> w = {{-1,-1},{-1,1},{1,-1},{1,1}};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            vector<int> tmp;
            for(int j=0;j<m;j++)
            {
                int x;
                cin>>x;
                tmp.push_back(x);
            }
            v.push_back(tmp);
        }
        
        
       long long mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                long long sum = v[i][j];
                for(auto [x,y]:w)
                {
                    sum+= s(i,j,x,y);
                }
                mx = max(mx,sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}