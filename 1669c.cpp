#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	ll n;
	cin >> n;
	ll a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	bool flag = false; // false means YES
	for (int i=0; i<n-2; i++) {
		if (a[i] % 2 != a[i+2] % 2) {
			flag = true;
			break;
		}
	}
	if (flag) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	} 
}