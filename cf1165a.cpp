#include <bits/stdc++.h>

using namespace std;

int main()
{
  int len, y, x;
  cin >> len >> y >> x;
  string num;
  cin >> num;
  int i = len, ops = 0;

  while (--i > len - x - 1)
    if (num[i] == '1')
      ops++;

  if (num[len - x - 1] == '0')
    ops++;

  i = len - x - 1;
  while (--i > len - y - 1)
    if (num[i] == '1')
      ops++;

  cout << ops;
}
