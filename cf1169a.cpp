#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, a, x, b, y;
  cin >> n >> a >> x >> b >> y;
  bool met = false;
  int curr_dan = a, curr_val = b;
  while (true)
  {
    if (curr_dan != n)
      curr_dan += 1;
    else
      curr_dan = 1;
    if (curr_val != 1)
      curr_val -= 1;
    else
      curr_val = n;
    if (curr_dan == curr_val)
    {
      cout << "YES";
      return 0;
    }
    if (curr_dan == x || curr_val == y)
    {
      cout << "NO";
      return 0;
    }
  }
}