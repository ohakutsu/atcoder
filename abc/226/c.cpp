#include <iostream>
#include <set>
#include <vector>
using namespace std;

long calc(const vector<int> &t, const vector<vector<int>> &a, int index,
          set<int> &done) {
  long sum = 0;

  for (const int &a_ij : a.at(index - 1)) {
    if (done.find(a_ij) == done.end()) {
      sum += calc(t, a, a_ij, done);
    }
  }

  sum += t.at(index - 1);
  done.insert(index);
  return sum;
}

int main() {
  int n;
  cin >> n;

  vector<int> t(n);
  vector<vector<int>> a(n, vector<int>(0));

  for (int i = 0; i < n; ++i) {
    cin >> t.at(i);

    int k;
    cin >> k;

    for (int j = 0; j < k; ++j) {
      int a_ij;
      cin >> a_ij;
      a.at(i).push_back(a_ij);
    }
  }

  set<int> done = {};
  long ans = calc(t, a, n, done);
  cout << ans << endl;

  return 0;
}
