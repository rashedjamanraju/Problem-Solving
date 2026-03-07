// https://www.codechef.com/problems/MOVHYPE
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
  int n;
  cin >> n;
  int k = 2 * n + 2;
  vector<int> v(k, 0);
  for (int i = 1; i < k; i += 2) {
    cin >> v[i];
  }

  int mn = INT_MAX;
  for (int i = 1; i < k - 1; i += 2) {
    int mx = max(v[i], v[i + 2]);
    mn = min(mx, mn);
  }
  cout << mn << endl;
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
