// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define yes cout << "yes" << endl
#define no cout << "no" << endl

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
  int n, m;
  cin >> n >> m;

  vector<vector<char>> v(n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      char c;
      cin >> c;
      v[i].push_back(c);
    }
  }

  int x, y;
  cin >> x >> y;
  x--;
  y--;  // convert to 0-indexed

  // 8 directions
  int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for (int d = 0; d < 8; ++d) {
    int nx = x + dx[d];
    int ny = y + dy[d];
    if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
      if (v[nx][ny] != 'x') {
        no;
        return;
      }
    }
    // outside cells ignored
  }

  yes;
}

int main() {
  fast_io();
  solve();
  return 0;
}
