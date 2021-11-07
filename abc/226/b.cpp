#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
  int n;
  cin >> n;

  unordered_set<string> buf;

  for (int i = 0; i < n; ++i) {
    int l;
    cin >> l;

    string str = "";
    for (int j = 0; j < l; ++j) {
      string s;
      cin >> s;

      str += s;
    }

    if (buf.find(str) == buf.end()) {
      buf.insert(str);
    }
  }

  cout << buf.size() << endl;

  return 0;
}
