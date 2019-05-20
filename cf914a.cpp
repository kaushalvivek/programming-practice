#include <bits/stdc++.h>

using namespace std;

bool notsqr(int a)
{
  long double root = sqrt(a);
  return (root - floor(root) != 0);
}

int main()
{
  int n;
  cin >> n;
  int i = -1, arr[n];
  while (++i < n)
    cin >> arr[i];
  sort(arr, arr + n);
  i = n;
  while (--i >= 0)
  {
    if (notsqr(arr[i]))
    {
      cout << arr[i];
      return 0;
    }
  }
  cout << "What the fork\n";
}