#include <bits/stdc++.h>
#define ll long long int
#define ld long double
using namespace std;

void solve() {
	ll doors[3], x, count = 0;
	cin >> x;
	for (int i = 0; i < 3; i++) {
	    cin >> doors[i];
	}
	for (int i = 0; i < 3; i++) {
	    if (doors[x - 1] != 0) {
	        x = doors[x - 1];
	        count++;
	    }
	}
	if (count == 2) {
	    cout << "YES\n";
	} else {
	    cout << "NO\n";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	} 
}
