//#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0; } else { solve(); return 0; }
using namespace std;

void solve() {
    ll n, total = 0;
    cin >> n;
    ll candies[n];
    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }
    ll minimum = *min_element(candies, candies + n);
    for (auto candy : candies) {
        total += candy - minimum;
    }
    cout << total << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
