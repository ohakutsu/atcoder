#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool calc_rank(vector<long> p_sum, long x, long &k) {
  p_sum.at(x) += 300;
  long max_score = p_sum.at(x);

  sort(p_sum.begin(), p_sum.end(), [](long a, long b) { return a > b; });

  for (long i = 0; i < p_sum.size(); ++i) {
    if (i + 1 > k) {
      return false;
    }

    if (p_sum.at(i) == max_score) {
      return true;
    }
  }
}

int main() {
  long n, k;
  cin >> n >> k;

  vector<long> p_sum(n, 0);
  for (long i = 0; i < n; ++i) {
    long p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    p_sum.at(i) = p1 + p2 + p3;
  }

  for (long i = 0; i < n; ++i) {
    bool ans = calc_rank(p_sum, i, k);

    cout << (ans ? "Yes" : "No") << endl;
  }

  return 0;
}
