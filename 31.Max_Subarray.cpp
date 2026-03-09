// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define yes cout << "Yes" << endl
#define no cout << "No" << endl;

using ll = long long;
using ull = unsigned long long;
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
  vector<int> v(n, 0);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  vector<int> ans;
  for (int i = 0; i < n; ++i) {
    int mx = v[i];
    for (int j = i; j < n; ++j) {
      mx = max(mx, v[j]);
      ans.push_back(mx);
    }
  }
  for (auto each : ans) {
    cout << each << " ";
  }
  cout << endl;
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
