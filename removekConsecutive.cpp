#include <bits/stdc++.h>
using namespace std;

string solve(string str, int k) {
  int n = str.length();
  int cnt;
  string res = "";
  int i = 0;
  while (i < n) {
    cnt = 0;
    char c = str[i];
    while (c == str[i]) {
      i++;
      cnt++;
    }
    if (cnt != k) {
      while (cnt--) {
        res.push_back(c);
      }
    }
  }
   return res;
}
int scanInteger() {
  int n;
  cin >> n;
  return n;
}
string scanString() {
  string str;
  cin >> str;
  return str;
}
int main() {
  string s1 = scanString();
  int k = scanInteger();
  cout << solve(s1, k);
  
  return 0;
}
