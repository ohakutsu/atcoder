#include <iostream>
#include <string>
#include <vector>
using namespace std;

void check(vector<vector<int>> &table, int &correct, int &wrong)
{
  correct = 0;
  wrong = 0;

  for (int i = 0; i < 9; ++i)
  {
    for (int j = 0; j < 9; ++j)
    {
      int ans = (i + 1) * (j + 1);

      if (table.at(i).at(j) == ans)
      {
        correct += 1;
      }
      else
      {
        wrong += 1;
        table.at(i).at(j) = ans;
      }
    }
  }
}

int main()
{
  vector<vector<int>> table(9, vector<int>(9));

  for (int i = 0; i < 9; ++i)
  {
    for (int j = 0; j < 9; ++j)
    {
      cin >> table.at(i).at(j);
    }
  }

  int correct;
  int wrong;
  check(table, correct, wrong);

  for (int i = 0; i < 9; ++i)
  {
    for (int j = 0; j < 9; ++j)
    {
      cout << table.at(i).at(j);
      if (j < 9 - 1)
        cout << " ";
    }

    cout << endl;
  }

  cout << correct << endl
       << wrong << endl;

  return 0;
}
