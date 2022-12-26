#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	string s;
	cin >> s;
	if (s.find("0000000") != string::npos or s.find("1111111") != string::npos) {
	    cout << "YES\n";
	} else {
	    cout << "NO\n";
	}
}

int main() {
//	int t;
//	cin >> t;
//	while (t--) {
		solve();
//	}
    return 0;
}
