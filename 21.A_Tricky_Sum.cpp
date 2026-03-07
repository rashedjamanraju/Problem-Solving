// https://codeforces.com/problemset/problem/598/A
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;

const int MOD = 1e9 + 7;
const double PI = 3.141592653589793;

// ---------- Fast IO ----------
void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  // Write your solution here
  ll a;
  cin >> a;
  ll ans = (a * (a + 1)) / 2;

  ll b = 1;
  while (b <= a) {
    ans -= (2 * b);
    b = b << 1;
  }
  cout << ans << endl;
}

int main() {
  fast_io();

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  // solve();

  return 0;
}
