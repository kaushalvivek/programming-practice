#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, i;
  cin >> n;
  long long int moves = 0, temp, arr[n];
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < n; i++)
  {
    temp = arr[i];
    moves = 0;
    while (true)
    {
      if (temp == 1)
      {
        cout << moves << "\n";
        break;
      }
      else if (temp % 2 == 0)
      {
        temp /= 2;
        moves++;
      }
      else if (temp % 3 == 0)
      {
        temp = 2 * temp / 3;
        moves++;
      }
      else if (temp % 5 == 0)
      {
        temp = 4 * temp / 5;
        moves++;
      }
      else
      {
        cout << "-1\n";
        break;
      }
    }
  }
  return 0;
}