#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int x[n];
  int y[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> x[i] >> y[i];
  }

  int result = 0;

  for (int i = 0; i < n - 2; ++i)
  {
    for (int j = i + 1; j < n - 1; ++j)
    {
      for (int k = j + 1; k < n; ++k)
      {
        int area = (x[i] - x[k]) * (y[j] - y[k]) - (x[j] - x[k]) * (y[i] - y[k]);
        if (area != 0)
        {
          result++;
        }
      }
    }
  }

  cout << result << endl;

  return 0;
}