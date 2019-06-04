#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int i = -1, bucket = -1, temp;
  while (++i < n)
  {
    cin >> temp;
    if (temp > bucket && k % temp == 0)
      bucket = temp;
  }
  cout << k / bucket;
  return 0;
}