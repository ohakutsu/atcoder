#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> data(n, vector<int>(2));
  for (vector<int> &row : data) {
    cin >> row.at(0) >> row.at(1);
  }

  double sum_sec = 0;
  for (vector<int> row : data) {
    sum_sec += 1.0 * row.at(0) / row.at(1);
  }
  double center = sum_sec / 2;

  double ans = 0;
  for (vector<int> row : data) {
    double s = 1.0 * row.at(0) / row.at(1);

    if (center < s) {
      ans += row.at(1) * center;
      break;
    } else {
      center -= s;
      ans += row.at(0);
    }
  }

  cout << ans << endl;

  return 0;
}
