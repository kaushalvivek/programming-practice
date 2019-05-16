#include <bits/stdc++.h>

using namespace std;

int main()
{
  string a;
  cin >> a;
  int i, count_a = 0, test = 0;
  i = a.size();
  while (i--)
  {
    if (a[i] == 'a')
    {
      count_a++;
      test++;
    }

    else
      test--;
  }
  if (test > 0)
    cout << a.size();
  else
    cout << (count_a * 2 - 1);
  return 0;
}