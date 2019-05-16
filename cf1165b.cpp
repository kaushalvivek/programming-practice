#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int i = n, arr[n];
  while (i--)
    cin >> arr[i];
  sort(arr, arr + n);
  int check_for = 1;
  for (i = 0; i < n; i++)
  {
    if (arr[i] >= check_for)
      check_for++;
  }
  cout << check_for - 1;
}