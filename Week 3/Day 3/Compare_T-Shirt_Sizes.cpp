#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        char val1,val2;
        val1 = a[a.size()-1];
        val2 = b[b.size()-1];
        if(a == b) cout <<'=' << endl;
        else if(val1 =='L' && val1 == val2)
        {
            if(a.size()>b.size())
            {
                cout << '>' << endl;

            }
            else cout << '<' << endl;
        }
        else if(val1 == 'S' && val1 == val2)
        {
            if(a.size()>b.size())
            {
                cout << '<' << endl;

            }
            else cout << '>' << endl;
        }
        else if(val1 == 'L')
        {
            cout << '>' << endl;
        }
        else if(val2 == 'L') 
        {
            cout << '<' << endl;
        }
        else if(val1 == 'S')
        {
            cout << '<' << endl;
        }
        else if(val2 == 'S')
        {
            cout << '>' << endl;
        }
    }
    return 0;
}