#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s1, s2 = "Timur";
    cin >> n;
    cin >> s1;
    sort(s1.begin(), s1.end());
    if (s1==s2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}