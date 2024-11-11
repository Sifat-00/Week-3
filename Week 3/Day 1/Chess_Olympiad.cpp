#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int rem_game;
    int x;
    int y,z;
    cin >> x >> y >> z;
    float total = (x+(y*0.5));
    rem_game = 4-(x+y+z);
    float max_score = total+rem_game;
    if(max_score > 2) cout << "YES" << endl;
    else cout <<"NO" << endl;
}