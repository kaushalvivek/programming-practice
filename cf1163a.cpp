#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, ans;
  cin >> n >> m;
  if (m == 0)
    ans = 1;
  else if (m <= n / 2)
    ans = m;
  else
    ans = n - m;
  cout << ans;
  return 0;
}