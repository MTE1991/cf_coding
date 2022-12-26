#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
    ll n, a = 0, d = 0;
    string s;
    cin >> n;
    cin >> s;
    for (auto c:s) {
        if (c == 'A') {
            a++;
        } else {
            d++;
        }
    }
    if (a > d) {
        cout << "Anton\n";
    } else if (a < d) {
        cout << "Danik\n";
    } else {
        cout << "Friendship\n";
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
    
