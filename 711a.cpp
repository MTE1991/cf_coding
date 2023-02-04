#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll n;
    bool flag = false;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i][0] == 'O' and arr[i][1] == 'O') {
            arr[i][0] = '+';
            arr[i][1] = '+';
            flag = true;
            break;
        } else if (arr[i][3] == 'O' and arr[i][4] == 'O') {
            arr[i][3] = '+';
            arr[i][4] = '+';
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "YES\n";
        for (auto s : arr) {
            cout << s << "\n";
        }
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
    tc(0);
}
