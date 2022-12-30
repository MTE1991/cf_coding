#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	string s1, s2;
	cin >> s1;
	cin >> s2;
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if (s1 == s2) {
	    cout << 0 << endl;
	} else if (s1 > s2) {
	    cout << 1 << endl;
	} else {
	    cout << -1 << endl;
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
