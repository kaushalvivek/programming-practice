#include <bits/stdc++.h>

using namespace std;

int main()
{
  int hold_cum = 0, i, j, n, m, val;
  cin >> n >> m;
  int arr[n];
  int temp[n];
  int cum[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
    cum[i] = arr[i] + hold_cum;
    hold_cum += arr[i];
  }
  for (i = 0; i < n; i++)
  {
    val = cum[i];
    if (val <= m)
    {
      cout << 0 << " ";
      continue;
    }
    else
    {
      for (j = 0; j < i; j++)
      {
        temp[j] = arr[j];
      }
      sort(temp, temp + i);

      // some problem somewhere around here
      for (j = i - 1; j >= 0; j--)
      {
        if (val > m)
        {
          val -= temp[j];
          continue;
        }
        else
        {
          cout << i - 1 - j << " ";
          break;
        }
      }
    }
  }
  return 0;
}