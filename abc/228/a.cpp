#include <iostream>
using namespace std;

int main() {
  int s, t, x;
  cin >> s >> t >> x;

  bool ans = false;

  int current = s;
  while (true) {
    if (current == t) {
      break;
    }

    if (current == x) {
      ans = true;
      break;
    }

    // next
    if (current >= 23) {
      current = 0;
    } else {
      current += 1;
    }
  }

  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}
