#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;

        string x;
        cin >> x;

        int cnt = 0;
        for(int i=0;i<n/2;i++)
        {
            if(x[i]=='0' && x[n-i-1]=='1')
            {
               cnt+=2;
            }
            else if(x[i]=='1' && x[n-i-1]=='0')
            {
                cnt+=2;
            }
            else break;
        }
        cout << n-cnt << endl;
    }
    return 0;
}