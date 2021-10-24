#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<char>> table(n, vector<char>(n, '-'));

  for (int i = 0; i < m; ++i)
  {
    int a, b;
    cin >> a >> b;

    table.at(a - 1).at(b - 1) = 'o';
    table.at(b - 1).at(a - 1) = 'x';
  }

  for (vector<char> row : table)
  {
    for (int i = 0; i < row.size(); ++i)
    {
      cout << row.at(i);

      if (i != row.size() - 1)
      {
        cout << ' ';
      }
    }

    cout << endl;
  }

  return 0;
}
