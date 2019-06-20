#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  long int a, b0, temp, b1, b2, sum1, sum2, sum3;
  while (t--)
  {
    cin >> a;
    b0 = 0;
    b1 = 0;
    b2 = 0;
    while (a--)
    {
      cin >> temp;
      if (temp % 3 == 0)
        b0++;
      else if (temp % 3 == 1)
        b1++;
      else
        b2++;
    }
    sum1 = b2 > b1 ? b1 : b2;
    sum2 = (b2 - sum1) / 3;
    sum3 = (b1 - sum1) / 3;
    cout << b0 + sum2 + sum1 + sum3 << "\n";
  }
  return 0;
}