// Problem Link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A

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

bool is_ok(ll w, ll h, ll n, ll x) {
  ll a = x / w;
  ll b = x / h;

  if (a == 0 || b == 0) return false;

  return a >= (n + b - 1) / b;
}

ll bs(ll w, ll h, ll n) {
  ll start = 1;
  ll end = max(w, h) * n;
  ll ans = end;

  while (start <= end) {
    ll mid = start + (end - start) / 2;

    if (is_ok(w, h, n, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return ans;
}

void solve() {
  // Write your solution here
  ll w, h, n;
  cin >> w >> h >> n;
  ll ans = bs(w, h, n);
  cout << ans << endl;
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
