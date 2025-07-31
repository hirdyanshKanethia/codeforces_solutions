// Problem: A. Dragons
// Contest: Codeforces Round 142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
//
// Date: Sat 26 Jul 2025 11:11:04 PM IST
// File: /home/hirdyansh/codespace/cf/A. Dragons.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int s, n;
  cin >> s >> n;

  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; ++i) {
    cin >> arr[i].first >> arr[i].second;
  }

  sort(arr.begin(), arr.end(),
       [](const pair<int, int> &a, const pair<int, int> &b) {
         return a.first < b.first;
       });

  for (int i = 0; i < n; ++i) {
    if (arr[i].first >= s) {
      cout << "NO" << endl;
      return 0;
    }
    s += arr[i].second;
  }

  cout << "YES" << endl;

  return 0;
}
