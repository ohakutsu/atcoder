#include <bits/stdc++.h>
using namespace std;

int main()
{
  constexpr int n = 3;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr.at(i);
  }

  sort(arr.begin(), arr.end());
  cout << arr.at(n - 1) - arr.at(0) << endl;

  return 0;
}
