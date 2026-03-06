// https://atcoder.jp/contests/abc125/tasks/abc125_a
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
  int a, b, t;
  int ans = 0;
  cin >> a >> b >> t;
  ans += ((t / a) * b);
  cout << ans << endl;
}

int main() {
  fast_io();

  // int t;
  // cin >> t;

  // while (t--) {
  //   solve();
  // }

  solve();

  return 0;
}
