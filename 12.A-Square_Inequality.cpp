// https://atcoder.jp/contests/abc199/tasks/abc199_a
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
  unsigned long long A, B, C;
  cin >> A >> B >> C;
  if (A * A + B * B < C * C)
    cout << "Yes";ss
  else
    cout << "No";
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

