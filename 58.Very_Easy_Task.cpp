// Problem
// Link:https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

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

// ---------- Fast IO ----------
void fast_io() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

// ------------ GCD ------------
int __gcd(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
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

bool is_ok(ll n, ll x, ll y, ll mid) {
  ll count = (mid / x) + (mid / y);
  return count >= n;
}

ll bs(ll n, ll x, ll y) {
  ll l = 0;
  ll r = 1e18;
  ll ans = 0;

  while (l <= r) {
    ll mid = l + (r - l) / 2;
    if (is_ok(n, x, y, mid)) {
      ans = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return ans;
}

void solve() {
  ll n, x, y;
  cin >> n >> x >> y;

  ll first = min(x, y);

  if (n == 1) {
    cout << first << endl;
    return;
  }

  ll ans = bs(n - 1, x, y);

  cout << ans + first << endl;
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
