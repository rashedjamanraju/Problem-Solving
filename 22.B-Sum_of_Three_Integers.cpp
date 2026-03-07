// https://atcoder.jp/contests/abc051/tasks/abc051_b
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
  int k, s;
  cin >> k >> s;
  int count = 0;
  for (int i = 0; i <= k; ++i) {
    for (int j = 0; j <= k; ++j) {
      if (i + j > s) {
        break;
      } else {
        int ss = s - (i + j);
        if (ss <= k && ss >= 0) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
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
