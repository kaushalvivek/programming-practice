#include <bits/stdc++.h>

using namespace std;

int main()
{
  long n;
  cin >> n;
  long i, arr[n];
  long ans = 0;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  sort(arr, arr + n);
  for (i = 0; i < n / 2; i++)
    ans += (arr[i] + arr[n - 1 - i]) * (arr[i] + arr[n - i - 1]);
  cout << ans;
  return 0;
}