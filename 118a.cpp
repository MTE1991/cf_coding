#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

void solve() {
	string s;
	cin >> s;
	string vowelsUpper = "AEIOUY", vowelsLower = "aeiouy";
	
	// Remove all vowels
	for (auto c:vowelsUpper) {
	    s.erase(remove(s.begin(), s.end(), c), s.end());
	}
	for (auto c:vowelsLower) {
	    s.erase(remove(s.begin(), s.end(), c), s.end());
	}
	
	// Replace all consonants with lowercase characters
	for (int i = 0; i < s.size(); i++) {
	    s[i] = tolower(s[i]);
	}
	
	// Insert . before every consonants
	for (int i = 0; i < s.size(); i++) {
        s.insert(i, ".");
        i++;
    }
    
	cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//	int t;
//	cin >> t;
//	while (t--) {
		solve();
//	} 
}
