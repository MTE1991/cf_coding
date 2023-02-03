#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

class Point {
public:
    int x;
    int y;
    Point (int X, int Y) {
        x = X; y = Y;
    }
};

void solve() {
    ll n;
    string s;
    bool flag = false;
    cin >> n;
    cin >> s;
    Point p(0, 0);
    for (auto c : s) {
        if (c == 'U') {
            ++p.y;
        } else if (c == 'D') {
            --p.y;
        } else if (c == 'L') {
            --p.x;
        } else if (c == 'R') {
            ++p.x;
        }
        if (p.x == 1 and p.y == 1) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc(1);
}
