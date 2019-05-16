#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i, n;
  cin >> n;
  long int num;
  cin >> num;
  long int num_temp = num;
  int digits[n], new_digits[n], change[n];
  for (i = n - 1; i >= 0; i--)
  {
    digits[i] = num_temp % 10;
    num_temp /= 10;
  }
  int op[9];
  for (i = 0; i < 9; i++)
    cin >> op[i];

  for (i = 0; i < n; i++)
  {
    if (digits[i] < op[digits[i] - 1])
      change[i] = 1;
    else
      change[i] = 0;
  }

  int start = 0;

  for (i = 0; i < n; i++)
  {
    if (change[i] == 1 && start == 0)
    {
      start = 1;
      new_digits[i] = op[digits[i] - 1];
    }
    else if (change[i] == 1 && start == 1)
    {
      new_digits[i] = op[digits[i] - 1];
    }
    else if (change[i] == 0 && start == 0)
    {
      new_digits[i] = digits[i];
    }
    else
    {
      new_digits[i] = digits[i];
      start = -1;
    }
  }
  int ans = 0;
  for (i = n - 1; i >= 0; i++)
  {
    ans += (int)new_digits[i] * pow(10.0, n - i - 1);
  }
  cout << ans;
  return 0;
}