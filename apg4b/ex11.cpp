#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a;
  cin >> n >> a;

  for (int i = 1; i <= n; ++i) {
    char op1;
    int op2;
    cin >> op1 >> op2;

    switch (op1) {
      case '+':
        a += op2;
        break;
      case '-':
        a -= op2;
        break;
      case '*':
        a *= op2;
        break;
      case '/':
        if (op2 == 0) {
          cout << "error" << endl;
          return 0;
        }
        a /= op2;
        break;
      default:
        return 0;
    }

    cout << i << ':' << a << endl;
  }

  return 0;
}
