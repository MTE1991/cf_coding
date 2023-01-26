#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0; } else { solve(); return 0; }
using namespace std;

void solve() {
    ll n, p1 = 0, p2 = 0, p3 = 0;
    cin >> n;
    vector<string> v1(n), v2(n), v3(n);
    map<string, ll> counts;
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    } 
    for (int i = 0; i < n; i++) {
        cin >> v3[i];
    }
    for (auto str : v1) {
        counts[str]++;
    }
    for (auto str : v2) {
        counts[str]++;
    }  
    for (auto str : v3) {
        counts[str]++;
    }
    for (int i = 0; i < n; i++) {
        if (counts[v1[i]] == 1) {
            p1 += 3;
        } else if (counts[v1[i]] == 2) {
            p1++;
        }
        if (counts[v2[i]] == 1) {
            p2 += 3;
        } else if (counts[v2[i]] == 2) {
            p2++;
        }
        if (counts[v3[i]] == 1) {
            p3 += 3;
        } else if (counts[v3[i]] == 2) {
            p3++;
        }
    }
    cout << p1 << " " << p2 << " " << p3 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
