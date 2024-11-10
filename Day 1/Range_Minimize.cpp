#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        sort(ar,ar+n);
        int op1 = ar[n-1] - ar[2];
        int op2 = ar[n-3] - ar[0];
        int op3 = ar[n-2] - ar[1];
        cout << min({op1,op2,op3}) << endl;
    }
}
