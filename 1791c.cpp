#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

/*
class Point {
public:
    int x;
    int y;
    Point (int X, int Y) {
        x = X; y = Y;
    }
};
*/

void solve() {
    ll n, i = 0;
    string s;
    cin >> n;
    cin >> s;
    ll len = s.length();
    ll left = 0, right = len - 1;
    while (left <= right) {
        if ((s[left] == '1' and s[right] == '0') or (s[left] == '0' and s[right] == '1')) {
            left++;
            right--;
            len -= 2;
        } else {
            break;
        }
    }
    cout << len << "\n";
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
