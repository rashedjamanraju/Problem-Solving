// https://www.codechef.com/problems/BOWLBALL
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
  int n, x, y;
  cin >> n >> x >> y;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int each;
    cin >> each;
    if (each >= x && each <= y) {
      ans++;
    }
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
