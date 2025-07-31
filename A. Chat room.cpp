// Problem: A. Chat room
// Contest: Codeforces Beta Round 54 (Div. 2)
// URL: https://codeforces.com/problemset/problem/58/A
//
// Date: Wed 30 Jul 2025 11:08:05 PM IST
// File: /home/hirdyansh/codespace/cf/A. Chat room.cpp

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;

  stack<char> hello;

  hello.push('o');
  hello.push('l');
  hello.push('l');
  hello.push('e');
  hello.push('h');

  int i = 0;


  while (!hello.empty()) {
    if (i >= s.size()) {
      cout << "NO" << endl;
      return 0;
    }
    if (s[i] == hello.top()) {
      hello.pop();
    }
    i++;
  }

  cout << "YES" << endl;

  return 0;
}
