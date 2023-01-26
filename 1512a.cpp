//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <algorithm>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0; } else { solve(); return 0; }
using namespace std;

void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<ll, ll> counts;
    for (auto i : arr) {
        counts[i]++;
    }
    for (const auto [key, value] : counts) {
        if (value == 1) {
            auto itr = find(arr, arr + n, key);
            cout << distance(arr, itr) + 1 << "\n";
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
