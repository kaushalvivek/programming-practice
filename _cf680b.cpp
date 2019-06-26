#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, d;
  cin >> n >> d;
  int i, arr[n];
  if (n == d && d == 1)
  {
    cin >> i;
    if (i == 0)
      cout << 0;
    else
      cout << 1;
    return 0;
  }
  for (i = 0; i < n; i++)
    cin >> arr[i];

  int caught = 0;
  if (arr[d - 1] == 1)
    caught++;

  for (i = 1;; i++)
  {
    if (arr[d - 1 - i] == 1 && arr[d - 1 + i] == 1)
    {
      caught += 2;
    }

    if ((d - 1 + i == n - 1) || (d - 1 - i == 0))
      break;
  }

  int edge = d > n - d ? n - 1 : 0;

  if (edge == 0)
  {
    for (i = 2 * d - 1; i < n; i++)
      if (arr[i] == 1)
        caught++;
  }
  else
    for (i = 2 * d - n - 1; i >= 0; i--)
      if (arr[i] == 1)
        caught++;

  cout << caught;
  return 0;
}