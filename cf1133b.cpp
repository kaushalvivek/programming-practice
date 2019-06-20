#include <bits/stdc++.h>

using namespace std;

int main()
{
  long int n, k;
  cin >> n >> k;
  long int arr[n], flag[n];
  long int i, j, boxes = 0;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
    flag[i] = 0;
  }
  for (i = 0; i < n; i++)
  {
    if (flag[i] == 1)
      continue;
    for (j = i + 1; j < n; j++)
    {
      if (flag[j] == 1)
        continue;
      if ((arr[i] + arr[j]) % k == 0 && flag[j] == 0 && flag[i] == 0)
      {
        boxes += 2;
        flag[i] = 1;
        flag[j] = 1;
      }
    }
  }
  cout << boxes;
  return 0;
}