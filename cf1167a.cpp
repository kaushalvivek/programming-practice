#include <bits/stdc++.h>

using namespace std;

int main()
{
  int ops, length, i;
  string str;
  cin >> ops;
  while (ops--)
  {
    cin >> length;
    cin >> str;
    if (length < 11)
    {
      cout << "NO\n";
      continue;
    }
    for (i = 0; i < length - 10; i++)
    {
      if (str[i] == '8')
      {
        cout << "YES\n";
        break;
      }
      if (i == length - 11)
        cout << "NO\n";
    }
  }
  return 0;
}