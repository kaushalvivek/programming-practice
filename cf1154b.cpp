#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int i, arr[n];
  arr[0] = 0;
  int temp, start;
  cin >> start;
  int n_min = start, n_max = start;

  for (i = 1; i < n; i++)
  {
    cin >> temp;
    arr[i] = abs(start - temp);
    if (temp > n_max)
      n_max = temp;
    if (temp < n_min)
      n_min = temp;
  }
  int min = 101;
  int max = 0;
  for (i = 0; i < n; i++)
  {
    if (arr[i] > 0 && min > arr[i])
      min = arr[i];
  }
  if (min == 101)
  {
    cout << 0;
    return 0;
    // condition where all numbers are the same
  }

  max = n_max - n_min;

  for (i = 0; i < n; i++)
  {
    if ((arr[i] != 0 && arr[i] != min && arr[i] != 2 * min) || max > 2 * min)
    {
      cout << -1;
      return 0;
      // condition where it's not possible
    }
  }

  for (i = 0; i < n; i++)
  {
    if (arr[i] == 2 * min)
    {
      break;
    }
    if (i == n - 1 && min % 2 == 0 && min == max)
    {
      cout << min / 2;
      return 0;
      // condition where only 1 even number difference, hence a midpoint can be reached
    }
  }

  cout << min;
  return 0;
}