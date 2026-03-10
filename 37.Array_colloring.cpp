// https://codeforces.com/contest/2191/problem/A
// https://codeforces.com/problemset/problem/2191/A
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
  int n;
  cin >> n;
  vector<int> v(n, 0);
  map<int, char> mp;
  for (int i = 0; i < n; ++i) {
    /* code */
    cin >> v[i];
    if (i % 2 == 0) {
      mp[v[i]] = 'R';
    } else {
      mp[v[i]] = 'B';
    }
  }
  sort(v.begin(), v.end());
  bool ans = true;
  for (int i = 1; i < n; ++i) {
    if (mp[v[i]] == mp[v[i - 1]]) {
      ans = false;
      break;
    }
  }
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
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

/*

  #include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> pos(n + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    for (int i = 1; i < n; i++) {
        if (abs(pos[i] - pos[i + 1]) % 2 == 0) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
*/
