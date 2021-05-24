#include <iostream>

using namespace std;

void printVector(vector < int > v) {
  int n = v.size();
  for (auto x: v) {
    cout << v[x] << " ";
  }
}
vector < int > scanVector(int n) {
  int x;
  vector < int > v;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  return v;
}
int scanNum() {
  int n;
  cin >> n;
  return n;
}
int main() {
  int n = scanNum();
  vector < int > v = scanVector(n);

  return 0;
}
