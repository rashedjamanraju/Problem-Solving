// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
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

void bubble_sort(vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = i + 1; j < v.size(); ++j) {
      if (v[i] > v[j]) {
        swap(v[i], v[j]);
      }
    }
  }
}

void selection_sort(vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    int min_val = v[i];
    int min_val_ind = i;
    for (int j = i + 1; j < v.size(); ++j) {
      if (v[j] < min_val) {
        min_val = v[j];
        min_val_ind = j;
      }
    }
    swap(v[i], v[min_val_ind]);
  }
}

void insertion_sort(vector<int>& v) {
  for (int i = 1; i < v.size(); ++i) {
    int j = i - 1;
    int key = v[i];
    while (j >= 0 && v[j] > key) {
      v[j + 1] = v[j];
      j--;
    }
    v[j + 1] = key;
  }
}

// for merge sort
void merge(vector<int>& v, int start, int mid, int end) {
  vector<int> temp_v;
  int i = start, j = mid + 1;
  while (i <= mid && j <= end) {
    if (v[i] <= v[j]) {
      temp_v.push_back(v[i]);
      i++;
    } else if (v[i] > v[j]) {
      temp_v.push_back(v[j]);
      j++;
    }
  }
  while (i <= mid) {
    temp_v.push_back(v[i]);
    i++;
  }
  while (j <= end) {
    temp_v.push_back(v[j]);
    j++;
  }
  // putting in main array from temp array

  for (int i = 0, f = start; i < temp_v.size() && f <= end; ++i, ++f) {
    v[f] = temp_v[i];
  }
}

// for merge sort
void divide(vector<int>& v, int start, int end) {
  if (start == end) {
    return;
  } else {
    int mid = (start + end) / 2;
    divide(v, start, mid);
    divide(v, mid + 1, end);
    merge(v, start, mid, end);
  }
}

void merge_sort(vector<int>& v) { divide(v, 0, v.size() - 1); }

void quick_sort(vector<int>& v, int low, int high) {
  if (low >= high) return;

  int mid = (low + high) / 2;
  int pivot = v[mid];

  int i = low, j = high;

  while (i <= j) {
    while (i <= high && v[i] < pivot) i++;

    while (j >= low && v[j] > pivot) j--;

    if (i <= j) {
      swap(v[i], v[j]);
      i++;
      j--;
    }
  }

  quick_sort(v, low, j);
  quick_sort(v, i, high);
}

void solve() {
  // Write your solution here
  int n;
  cin >> n;
  vector<int> v(n, 0);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  // bubble_sort(v);
  // selection_sort(v);
  // insertion_sort(v);
  // merge_sort(v);
  quick_sort(v, 0, n - 1);
  for (auto each : v) {
    cout << each << " ";
  }
  cout << endl;
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
