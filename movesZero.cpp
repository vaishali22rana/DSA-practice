#include <iostream>

using namespace std;

void printVector(vector < int > v) {
  int n = v.size();
  for (auto x: v) {
    cout << x << " ";
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
  int current=n-1;
  for(int i=n-1;i>=0;i--){
        if(v[i]!=0){
              v[current]=v[i];
              current--;
          }
   }
   while(current>=0){
          v[current]=0;
          current--;
     }
    printVector(v);
  return 0;
}
