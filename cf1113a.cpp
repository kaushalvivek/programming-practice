#include <bits/stdc++.h>

using namespace std;

int minimum(int a, int b)
{
  if (a < b)
    return a;
  else
    return b;
}

int main()
{
  int n, v;
  cin >> n >> v;
  if (n - 1 <= v)
    cout << n - 1;
  else
    cout << v + (n - v) * (n - v + 1) / 2 - 1;
  return 0;
}