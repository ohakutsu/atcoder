#include <iostream>
using namespace std;

int main() {
  int n, k, a;
  cin >> n >> k >> a;

  int current;
  for (int i = 0; i < k; ++i) {
    if (i == 0) {
      current = a;
      continue;
    }

    if (current == n) {
      current = 1;
    } else {
      current += 1;
    }
  }

  cout << current << endl;

  return 0;
}
