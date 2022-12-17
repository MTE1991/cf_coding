#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	ll n, sum = 0, count = 0, i = 1;
	cin >> n;
	while (sum <= n) {
		sum += i;
		if (sum != i) {
			count++;
		}
		i++;
	}
	cout << count << endl;
}

int main() {
//	int t;
//	cin >> t;
//	while (t--) {
		solve();
//	} 
}