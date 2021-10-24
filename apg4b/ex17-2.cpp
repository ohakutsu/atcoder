#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, s;
  cin >> n >> s;

  int a[n], p[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i)
  {
    cin >> p[i];
  }

  int ans = 0;

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      if ((a[i] + p[j]) == s)
      {
        ans += 1;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
