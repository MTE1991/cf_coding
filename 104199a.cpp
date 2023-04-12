/*
Your hotel has an unusual elevator - instead of the usual buttons for each floor, it has only two:  + 3 and  - 2, which move the elevator three floors up and two floors down, respectively.

You want to get from floor number 0 (where the hotel lobby is) to floor number D (where your room is), but you don't want to constantly press the buttons. What is the minimum number of clicks you need to reach the D-th floor?
Input data

The single line contains one integer D ( - 1000 ≤ D ≤ 1000) — the number of the floor you want to go to. Please note that the hotel has underground floors with negative numbers.
Output

Print a single number — the minimum number of clicks to move from the zero floor to the floor numbered D.
*/

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double 
#define tc(val) if (val) { ll t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

void solve() {
    ll d;
    cin >> d;
    ll curr = 0, clicks = 0;
    while (curr != d) {
        if (d - curr >= 3) {
            curr += 3;
        } else {
            curr -= 2;
        }
        clicks++;
    }
    cout << clicks << endl;
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
