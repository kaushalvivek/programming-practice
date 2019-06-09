#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, count = 1, max = 1;
  long temp, prev;
  cin >> n;
  cin >> prev;
  while (--n)
  {
    cin >> temp;
    if (temp > prev * 2)
    {
      if (max < count)
        max = count;
      count = 1;
    }
    else
      count++;

    prev = temp;
  }
  if (count > max)
    max = count;
  cout << max;
  return 0;
}