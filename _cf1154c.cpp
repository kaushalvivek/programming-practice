#include <bits/stdc++.h>

using namespace std;

long mini(long a, long b, long c)
{
  if (a <= b && a <= c)
    return a;
  if (b <= a && b <= c)
    return b;
  else
    return c;
}

int main()
{
  long f, r, c;
  cin >> f >> r >> c;
  long fw, rw, cw, fr, rr, cr;
  fw = f / 3;
  rw = r / 2;
  cw = c / 2;

  long ans;
  if (mini(fw, rw, cw) == cw)
  {
    fr = f - cw * 3;
    cr = c - cw * 2;
    rr = r - cw * 2;
    if (rr >= 2 && fr >= 2)
      ans = 7 * cw + 4;
    else if (rr >= 1 && fr >= 2)
      ans = 7 * cw + 3;
    else if (rr >= 1 && fr >= 1)
      ans = 7 * cw + 2;
    else if (rr >= 1 || fr >= 1)
      ans = 7 * cw + 1;
    else
      ans = 7 * cw;
  }
  else if (mini(fw, rw, cw) == rw)
  {
    fr = f - rw * 3;
    cr = c - rw * 2;
    rr = r - rw * 2;
    if (cr >= 2 && fr >= 1)
      ans = 7 * rw + 3;
    else if (cr >= 1 && fr >= 1)
      ans = 7 * rw + 2;
    else if (fr >= 2)
      ans = 7 * rw + 2;
    else if (cr >= 1 || fr >= 1)
      ans = 7 * rw + 1;
    else
      ans = 7 * rw;
  }
  else if (mini(fw, rw, cw) == fw)
  {
    fr = f - fw * 3;
    cr = c - fw * 2;
    rr = r - fw * 2;
    if (cr >= 1 && rr >= 1)
      ans = 7 * fw + 2;
    else if (cr >= 1 || rr >= 1)
      ans = 7 * fw + 1;
    else
      ans = 7 * fw;
  }
  cout << ans;
  return 0;
}