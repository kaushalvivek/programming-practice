#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i, n, t;
  cin >> n >> t;
  int s[n];
  int d[n];
  for (i = 0; i < n; i++)
  {
    cin >> s[i] >> d[i];
  }
  int temp, first[n], diff = -1, ans;
  for (i = 0; i < n; i++)
  {
    temp = s[i];
    while (temp < t)
      temp += d[i];
    if (diff == -1)
    {
      diff = temp - t;
      ans = i + 1;
    }
    else if (diff > temp - t)
    {
      diff = temp - t;
      ans = i + 1;
    }
  }
  cout << ans;
  return 0;
}