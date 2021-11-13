#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int calc_a(int s) {
  int a = 1;

  while (true) {
    double b = 1.0 * (s - 3 * a) / (4 * a + 3);

    int b_int = round(b);
    double calced_a = 1.0 * (s - 3 * b_int) / (4 * b_int + 3);
    if (a == calced_a) {
      return a;
    }

    if (s < (7 * a + 3)) {
      return -1;
    }

    a += 1;
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> s(n);
  for (int &s_i : s) {
    cin >> s_i;
  }

  int count = 0;
  for (const int &s_i : s) {
    int a = calc_a(s_i);

    if (a == -1) {
      count += 1;
    }
  }

  cout << count << endl;

  return 0;
}
