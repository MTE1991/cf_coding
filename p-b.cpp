#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std; 

void solve() {
    ll n, sereja = 0, dima = 0;
    cin >> n;
    list<ll> cards(n);
    for (auto &i : cards) {
        cin >> i;
    }
    ll turn = 1;
    while (cards.size()) {
        if (turn & 1) {
            if (cards.front() > cards.back()) {
                sereja += cards.front();
                cards.pop_front();
            } else {
                sereja += cards.back();
                cards.pop_back();
            }
        } else {
            if (cards.front() > cards.back()) {
                dima += cards.front();
                cards.pop_front();
            } else {
                dima += cards.back();
                cards.pop_back();
            }
        }
        turn++;
    }
    cout << sereja << " " << dima << endl;
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