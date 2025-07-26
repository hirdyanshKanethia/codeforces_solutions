// Problem: A. String Task
// Contest: Codeforces Beta Round 89 (Div. 2)
// URL: https://codeforces.com/problemset/problem/118/A
//
// Date: Sat 26 Jul 2025 07:12:27 PM IST
// File: /home/hirdyansh/codespace/cf/A. String Task.cpp

#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;
  cin >> word;

  string ans = "";

  for (int i = 0; i < size(word); ++i) {
    if (tolower(word[i]) == 'a' || tolower(word[i]) == 'e' ||
        tolower(word[i]) == 'i' || tolower(word[i]) == 'o' ||
        tolower(word[i]) == 'u' || tolower(word[i]) == 'y') {
      continue;
    } else {
      ans += ".";
      ans += tolower(word[i]);
    }
  }

  cout << ans << endl;

  return 0;
}
