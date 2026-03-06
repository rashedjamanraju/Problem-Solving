// https://codeforces.com/problemset/problem/633/A
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
  int a, b, c;
  cin >> a >> b >> c;
  bool ans = false;
  for (int i = 0; i <= c; i++) {
    for (int j = 0; j <= c; j++) {
      if (a * i + b * j == c) {
        ans = true;
        break;
      }
    }
  }
  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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