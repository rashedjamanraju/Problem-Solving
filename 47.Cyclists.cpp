// https://codeforces.com/contest/2208/problem/B
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

void solve() {
  // Write your solution here
  // int n, k, p, m;
  // cin >> n >> k >> p >> m;
  /*
    first amake dekhte hobe p<=k kina jodi hoi tahole
      cost=0
      tahole age win card ke dech er last e pathabo and cost+=(oi pos er
    valueta) cost ki m theke beshi naki kom kom hole somossa nai but beshi hole
    exit kore dibo then ami ekdom general case e chole ashbo seta hocce ekhon
    amar kaache original deck er p pos er element sobar sesh e amake ekhon
    setake 1__k pos er modde ante hobe jate abar play korte pari oi card diye

      ekhon eita korte giye amake 1__k er modde theke shob cheye chuto element
    ta ke ekbar ber kore last e boshale amar win card ek dhap agai ashbe    aar
    amar arekta jinish bere jabe seta hocce cost ta oi je min element ta ke 1__k
    theke ber korte giye  oi value poriman cost bere jabe jodi cost beregiye
    dekhi ekhono amar m ke exceed kortese na tahole continue korbo aar jodi
    exceed kore tahole ans hocce ami je koibar win card use krosi oita print
      dhora jak cost m exceed hoi nai thaole
        abar ami shob theke chuto value jeta 1__k er modde ase oita ke ami abar
    ekdom last e niye jabo jodi last e niye jai tahole abar cost bar be eibhabe
    korte thakbo
  */

  int n, k, p, m;
  cin >> n >> k >> p >> m;
  int cost = 0;
  vector<int> v(n + 1, 0);
  for (int i = 1; i < n + 1; i++) {
    cin >> v[i];
  }
  int count = 0;
  while (true) {
    if (p <= k) {
      if (cost + v[p] <= m) {
        cost += v[p];
        count++;
        v.push_back(v[p]);
        v.erase(v.begin() + p);
        p = n;
      } else {
        break;
      }
    } else {
      auto it = min_element(v.begin() + 1, v.begin() + k + 1);
      int index = it - v.begin();
      if (cost + v[index] <= m) {
        cost += v[index];
        v.push_back(v[index]);
        v.erase(v.begin() + index);
        p--;
      } else {
        break;
      }
    }
  }
  cout << count << endl;
}

int main() {
  fast_io();

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  // solve()

  return 0;
}
