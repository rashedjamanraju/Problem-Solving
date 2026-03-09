// https://codeforces.com/problemset/problem/2193/A
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

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

// ---------- 4 Direction Neighbours ----------
vector<pii> get4Neighbours(int x, int y, int n, int m) {
  int dx[] = {-1, 1, 0, 0};
  int dy[] = {0, 0, -1, 1};

  vector<pii> nb;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && nx < n && ny >= 0 && ny < m) nb.push_back({nx, ny});
  }

  return nb;
}

// ---------- 8 Direction Neighbours ----------
vector<pii> get8Neighbours(int x, int y, int n, int m) {
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  vector<pii> nb;

  for (int i = 0; i < 8; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];

    if (nx >= 0 && nx < n && ny >= 0 && ny < m) nb.push_back({nx, ny});
  }

  return nb;
}

void solve() {
  // Write your solution here
  int n, s, x;
  cin >> n >> s >> x;
  vector<int> v(n, 0);
  ll sum = 0;
  for (int i = 0; i < n; ++i) {
    /* code */
    cin >> v[i];
    sum += v[i];
  }
  if (sum == s) {
    cout << "YES" << endl;
  } else {
    if (sum > s) {
      cout << "NO" << endl;
    } else {
      ll diff = s - sum;
      if (diff % x == 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
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
