#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	ll n, steps[] = {5, 4, 3, 2, 1}, count = 0;
	cin >> n;
	for (auto step:steps) {
	    while (n > 0) {
	        n -= step;
	        count++;
	    }
	}
	cout << count << endl;
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
