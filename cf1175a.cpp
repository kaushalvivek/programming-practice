#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t, i;
  cin >> t;
  long long int n, k, count;
  for (i = 0; i < t; i++)
  {
    count = 0;
    cin >> n >> k;
    while (n != 0)
    {
      if (n % k == 0)
      {
        n /= k;
        count++;
      }
      else
      {
        n -= n % k;
        count += n % k;
      }
    }
    cout << count << "\n";
  }
  return 0;
}