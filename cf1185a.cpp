#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int a, b, c, d;
  cin >> a >> b >> c >> d;
  long int first, sec, third;
  first = a < b ? (a < c ? a : c) : (b < c ? b : c);
  sec = a > b ? (a < c ? a : (c < b ? b : c)) : (b < c ? b : (c < a ? a : c));
  third = a > b ? (a > c ? a : c) : (b > c ? b : c);
  if (d <= third - sec)
  {
    if (d <= sec - first)
      cout << 0;
    else
      cout << d - (sec - first);
  }
  else
  {
    if (d <= sec - first)
      cout << d - (third - sec);
    else
      cout << d - (sec - first) + d - (third - sec);
  }
  return 0;
}