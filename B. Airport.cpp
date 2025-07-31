// Problem: B. Airport
// Contest: Codeforces Round 134 (Div. 2)
// URL: https://codeforces.com/problemset/problem/218/B
//
// Date: Thu 31 Jul 2025 12:42:12 AM IST
// File: /home/hirdyansh/codespace/cf/B. Airport.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  
  priority_queue<int> maxpq;
  priority_queue<int, vector<int>, greater<int>> minpq;

  int temp;

  for (int i = 0; i < m; ++i) {
    cin >> temp;
    maxpq.push(temp);
    minpq.push(temp);
  }

  int max_money = 0;
  int min_money = 0;

  for (int i = 0; i < n; ++i) {
    int max_top = maxpq.top();
    while (minpq.top() <= 0) {
      minpq.pop();
    }
    int min_top = minpq.top();

    max_money += max_top;
    min_money += min_top;

    maxpq.pop();
    maxpq.push(max_top-1);

    minpq.pop();
    minpq.push(min_top-1);
  }

  cout << max_money << " " << min_money << endl;

  return 0;
}
