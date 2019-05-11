#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int i, prev, next, ans = 0;
  cin >> prev;
  int preprev = 0;
  for (i = 1; i < n; i++)
  {
    cin >> next;
    if (preprev == 3 && prev == 1 && next == 2)
      ans--;
    if ((prev == 2 && next == 1) || (prev == 1 && next == 2))
      ans += 3;
    else if ((prev == 1 && next == 3) || (prev == 3 && next == 1))
      ans += 4;
    else
    {
      cout << "Infinite";
      return 0;
    }
    preprev = prev;
    prev = next;
  }
  cout << "Finite"
       << "\n";
  cout << ans;
  return 0;
}