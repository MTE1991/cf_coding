#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void solve() {
    int row, col, rotation=1;
	cin >> row >> col;
	char snake[row][col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if ((i + 1) % 2 == 0) {
				snake[i][j] = '.';
			} else {
				snake[i][j] = '#';
			}
		}
	}
	for (int i = 1; i < row; i += 2) {
		if (rotation % 2 != 0) {
			snake[i][col - 1] = '#';
			rotation++;
		} else {
			snake[i][0] = '#';
			rotation++;
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << snake[i][j];
		}
		cout << "\n";
	}
}

int main() {
//    ll t;
//    cin >> t;
//    while (t--) {
        solve();
//    }
    return 0;
}
