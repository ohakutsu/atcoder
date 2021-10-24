#include <iostream>
#include <string>
using namespace std;

int main()
{
  int a, b;
  string op;
  cin >> a >> op >> b;

  int result;

  if (op == "+")
  {
    result = a + b;
  }
  else if (op == "-")
  {
    result = a - b;
  }
  else if (op == "*")
  {
    result = a * b;
  }
  else if (op == "/")
  {
    if (b == 0)
    {
      cout << "error" << endl;
      return 0;
    }
    result = a / b;
  }
  else
  {
    cout << "error" << endl;
    return 0;
  }

  cout << result << endl;
  return 0;
}
