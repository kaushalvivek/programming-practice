#include <bits/stdc++.h>

using namespace std;

int main()
{
  int ans = 0, j, li, ri, xi, i, n, h, m;
  cin >> n >> h >> m;
  int street[n];
  for (i = 0; i < n; i++)
    street[i] = h;
  for (i = 0; i < m; i++)
  {
    cin >> li >> ri >> xi;
    for (j = li - 1; j < ri; j++)
      if (street[j] > xi)
        street[j] = xi;
  }
  for (i = 0; i < n; i++)
    ans += street[i] * street[i];
  cout << ans;
  return 0;
}