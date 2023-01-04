#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	ll n, x = 0, y = 0, z = 0;
	cin >> n;
	while (n--) {
	    array<ll, 3> a = {0, 0, 0};
	    cin >> a[0] >> a[1] >> a[2];
	    x += a[0];
	    y += a[1];
	    z += a[2];
	}
	if (x == 0 and y == 0 and z == 0) {
	    cout << "YES\n";
	} else {
	    cout << "NO\n";
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//	int t;
//	cin >> t;
//	while (t--) {
		solve();
//	} 
}
