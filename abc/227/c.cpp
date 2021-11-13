#include <iostream>
using namespace std;

int main() {
  long n;
  cin >> n;

  long count = 0;

  for (long a = 1; a * a * a <= n; ++a) {
    for (long b = a; a * b * b <= n; ++b) {
      count += n / (a * b) - b + 1;
    }
  }

  cout << count << endl;

  return 0;
}
