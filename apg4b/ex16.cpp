#include <iostream>
#include <vector>
using namespace std;

int main()
{
  constexpr int n = 5;
  vector<int> a(n);

  for (int i = 0; i < n; ++i)
  {
    cin >> a.at(i);
  }

  for (int i = 0; i < n - 1; ++i)
  {
    if (a.at(i) == a.at(i + 1))
    {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;

  return 0;
}
