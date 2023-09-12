#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define tc(val) if (val) { int t; cin >> t; while (t--) { solve(); } return 0;} else { solve(); return 0; }
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 or n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 or n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

const int N = 1e6; 

vector<int> divisors(N + 1, 0);

void sieve() {
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            divisors[j]++;
        }
    }
}

bool isPermutation(const string &s) {
    string sorted_s = s;
    sort(sorted_s.begin(), sorted_s.end());
    return sorted_s == "0123456789";
}

string findTidy(string num) {
    int down = -1;
    
    // Find the first "down" pair.
    for (int i = 0; num[i + 1]; i++) {
        if (num[i + 1] < num[i]) {
            down = i;
            break;
        }
    }

    // The number itself is tidy; return it.
    if (down == -1) {
        return num;
    }

    // Now, go through all the equal digits, scanning back.
    while (down > 0 && num[down - 1] == num[down]) {
        down--;
    }

    // Subtract 1 from this slot.
    num[down]--;

    // Just change these to 9s...
    for (int i = down + 1; num[i]; i++) {
        num[i] = '9';
    }

    // Strip leading 0s and return.
    string s(num);
    size_t startPos = s.find_first_not_of('0');
    if (startPos != string::npos) {
        s = s.substr(startPos);
    }
    return s;
}

void solve() {
    static int tc = 0;
    ull n;
    cin >> n;
    cout << "Case #" << ++tc << ": " << findTidy(to_string(n)) << endl;
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
