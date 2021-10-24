#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a_i(n);
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a_i.at(i);
    sum += a_i.at(i);
  }

  int avg = sum / n;
  for (int i = 0; i < n; ++i) {
    if (a_i.at(i) < avg) {
      cout << avg - a_i.at(i) << endl;
    } else {
      cout << a_i.at(i) - avg << endl;
    }
  }

  return 0;
}
