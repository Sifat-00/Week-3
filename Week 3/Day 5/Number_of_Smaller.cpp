#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<m;i++) cin >> b[i];
 
    int cnt = 0;
 
    int l=0;
    int r=0;
    while(r < m)
    {
        if(l < n && a[l] < b[r])
        {
            cnt++;
            l++;
        }
        else
        {
            cout << cnt <<" ";
            r++;
        }
    }
 
    return 0;
}