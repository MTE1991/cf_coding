#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	ll n;
	vector<ld> a;
	ld ans;
	cin >> n;
	for (int i=0; i<n; i++) {
		ld tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	ans = accumulate(a.begin(), a.end(), 0) / (ld)n;
	cout << setprecision(12) << ans << endl;
}

int main() {
//	int t;
//	cin >> t;
//	while (t--) {
		solve();
//	} 
}