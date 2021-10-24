#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> x(n);
  vector<int> y(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> x.at(i) >> y.at(i);
  }

  int result = 0;

  for (int i = 0; i < n - 2; ++i)
  {
    for (int j = i + 1; j < n - 1; ++j)
    {
      for (int k = j + 1; k < n; ++k)
      {
        int area = (x.at(i) - x.at(k)) * (y.at(j) - y.at(k)) - (x.at(j) - x.at(k)) * (y.at(i) - y.at(k));
        if (area != 0)
        {
          result += 1;
        }
      }
    }
  }

  cout << result << endl;

  return 0;
}