#include <iostream>
using namespace std;

int main()
{
  int x;
  cin >> x;

  if (x == 0)
  {
    cout << "No" << endl;
    return 0;
  }

  if (x % 100 == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
