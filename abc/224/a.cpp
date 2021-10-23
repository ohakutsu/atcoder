#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int size = s.size();
  if (s.at(size - 2) == 'e' && s.at(size - 1) == 'r')
  {
    cout << "er" << endl;
  }
  else
  {
    cout << "ist" << endl;
  }

  return 0;
}
