#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i, n, ans = 0;
  cin >> n;
  for (i = 2; i < n; i++)
    ans += i * (i + 1);
  cout << ans;
  return 0;
}