#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, i;
  cin >> n;
  long int arr[n], ef = 0, of = 0;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (ef == 0 || of == 0)
    {

      if (arr[i] % 2 == 0)
        ef = 1;
      else
        of = 1;
    }
  }
  if (ef && of)
  {
    sort(arr, arr + n);
  }
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}