#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int x, y, z;
  cin >> x >> y >> z;
  long long int s, m, extra;
  s = (long long int)x / z;
  m = (long long int)y / z;
  if (x % z + y % z >= z)
  {
    if (x % z > y % z)
    {
      cout << s + m + 1 << " " << z - x % z;
    }
    else
    {
      cout << s + m + 1 << " " << z - y % z;
    }
  }
  else
  {
    cout << s + m << " " << 0;
  }
  return 0;
}