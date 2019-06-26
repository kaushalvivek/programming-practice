#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i, t[5], sum = 0;
  for (i = 0; i < 5; i++)
    cin >> t[i];
  sort(t, t + 5);
  int max_sum = 0;
  for (i = 4; i > 1; i--)
  {
    if (t[i] == t[i - 1] && t[i - 2] == t[i] && 3 * t[i] > max_sum)
      max_sum = 3 * t[i];

    else if (t[i] == t[i - 1] && 2 * t[i] > max_sum)
      max_sum = 2 * t[i];

    else if (t[i - 2] == t[i - 1] && 2 * t[i - 1] > max_sum)
      max_sum = 2 * t[i - 1];
  }

  for (i = 0; i < 5; i++)
    sum += t[i];

  cout << sum - max_sum;
  return 0;
}