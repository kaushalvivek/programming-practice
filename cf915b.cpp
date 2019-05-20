#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, pos, l, r;
  cin >> n >> pos >> l >> r;
  int clicks = 0;
  if (abs(pos - l) < abs(pos - r))
  {
    // Closer to left
    if (l != 1)
    {
      // have to close something at left
      clicks += abs(pos - l); // Transversal
      clicks++;               // Closing
      pos = l;
    }

    if (r != n)
    {
      // have to close something at right
      clicks += abs(pos - r); // Transversal
      clicks++;               //Closing
    }
  }
  else
  {
    // Closer to right
    if (r != n)
    {
      // have to close something at right
      clicks += abs(pos - r); // Transversal
      clicks++;               // Closing
      pos = r;
    }

    if (l != 1)
    {
      // have to close something at left
      clicks += abs(pos - l); // Transversal
      clicks++;               //Closing
    }
  }
  cout << clicks;
  return 0;
}