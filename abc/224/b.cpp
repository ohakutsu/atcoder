#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;

  vector<vector<int>> a(h, vector<int>(w));
  for (int i = 0; i < h; ++i)
  {
    for (int j = 0; j < w; ++j)
    {
      cin >> a.at(i).at(j);
    }
  }

  for (int i_1 = 0; i_1 < h - 1; ++i_1)
  {
    for (int i_2 = i_1 + 1; i_2 < h; ++i_2)
    {
      for (int j_1 = 0; j_1 < w - 1; ++j_1)
      {
        for (int j_2 = j_1 + 1; j_2 < w; ++j_2)
        {
          if ((a.at(i_1).at(j_1) + a.at(i_2).at(j_2)) > (a.at(i_2).at(j_1) + a.at(i_1).at(j_2)))
          {
            cout << "No" << endl;
            return 0;
          }
        }
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}
