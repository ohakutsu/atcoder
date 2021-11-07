#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  set<vector<int>> buf;

  for (int i = 0; i < n; ++i) {
    int l;
    cin >> l;

    vector<int> v(l);
    for (int &a : v) {
      cin >> a;
    }

    if (buf.find(v) == buf.end()) {
      buf.insert(v);
    }
  }

  cout << buf.size() << endl;

  return 0;
}
