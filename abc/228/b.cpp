#include <iostream>
#include <set>
#include <vector>
using namespace std;

void _count_with_set(vector<int> &a, int x, set<int> &list) {
  if (list.find(x) != list.end()) {
    return;
  }

  list.insert(x);
  int next = a.at(x - 1);
  _count_with_set(a, next, list);
}

int count(vector<int> &a, int x) {
  set<int> list;
  _count_with_set(a, x, list);

  return list.size();
}

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n, 0);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }

  int ans = count(a, x);
  cout << ans << endl;

  return 0;
}
