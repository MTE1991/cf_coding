#include <iostream>
#include <tuple>
using namespace std;

/*
EEA algorithm:
Calculate gcd(a, b) and the values of s and t and return them as a 3-tuple
*/
tuple<int, int, int> extended_gcd(int a, int b, int &old_s, int &s) {
    old_s = 1, s = 0;
    int old_t = 0, t = 1, old_r = a, r = b;
    while (r) {
        int q = old_r / r;
        tie(old_r, r) = make_tuple(r, old_r - q * r);
        tie(old_s, s) = make_tuple(s, old_s - q * s);
        tie(old_t, t) = make_tuple(t, old_t - q * t);
    }
    return make_tuple(old_r, old_s, old_t);
}

int main() {
    int old_S, S;
    int r1 = 26, r2 = 11;
    int r, s, t;
    tie(r, s, t) = extended_gcd(r1, r2, old_S, S);
    cout << "gcd(" << r1 << ", " << r2 << ") = " << r << endl;
    cout << "s = " << s << ", t = " << t << endl;
    return 0;
}
