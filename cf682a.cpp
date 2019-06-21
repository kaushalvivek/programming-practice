#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int a, b;
  cin >> a >> b;
  long long int q1, q2, r1, r2, ans;
  q1 = a / 5;
  q2 = b / 5;
  r1 = a % 5;
  r2 = b % 5;
  if (r1 + r2 >= 5)
    ans = 5 * q1 * q2 + q1 * r2 + q2 * r1 + r1 + r2 - 4;
  else
    ans = 5 * q1 * q2 + q1 * r2 + q2 * r1;
  cout << ans;
  return 0;
}