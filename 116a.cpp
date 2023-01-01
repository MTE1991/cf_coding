#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
    ll n, entered, exited, curr = 0, cap = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> exited >> entered;
        curr += entered;
        curr -= exited;
        cap = max(curr, cap);
    }
    cout << cap << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//	ll t;
//	cin >> t;
//	while (t--) {
		solve();
//	} 
}
