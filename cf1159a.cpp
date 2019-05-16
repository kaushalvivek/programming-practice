#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i = -1, n;
  cin >> n;
  string str;
  cin >> str;
  int init = 0;
  while (++i < n)
  {
    if (str[i] == '-')
      init--;
    else
      init++;
    if (init < 0)
      init = 0;
  }
  cout << init;
}