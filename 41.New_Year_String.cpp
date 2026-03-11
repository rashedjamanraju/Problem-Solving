// https://codeforces.com/problemset/problem/2182/A
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<long long>;

const int MOD = 1e9 + 7;
const double PI = 3.141592653589793;

void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  if (s.find("2026") != string::npos) {
    cout << 0 << endl;
  } else if (s.find("2025") != string::npos) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  fast_io();

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
