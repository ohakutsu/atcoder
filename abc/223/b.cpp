#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  string s_min = s;
  string s_max = s;
  string s_buf;

  // left shift
  s_buf = s;
  for (int i = 0; i < s.size(); ++i) {
    s_buf.push_back(s_buf.at(0));
    s_buf.erase(0, 1);

    if (s_min > s_buf) {
      s_min = s_buf;
    }
    if (s_max < s_buf) {
      s_max = s_buf;
    }
  }

  // right shift
  s_buf = s;
  for (int i = 0; i < s.size(); ++i) {
    char last_char = s_buf.at(s.size() - 1);
    s_buf = last_char + s_buf;
    s_buf.pop_back();

    if (s_min > s_buf) {
      s_min = s_buf;
    }
    if (s_max < s_buf) {
      s_max = s_buf;
    }
  }

  cout << s_min << endl;
  cout << s_max << endl;

  return 0;
}
