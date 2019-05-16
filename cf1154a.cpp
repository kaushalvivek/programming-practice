#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int arr[4];
  int i = -1;
  while (++i < 4)
    cin >> arr[i];
  sort(arr, arr + 4);
  cout << arr[3] - arr[1] << " " << arr[3] - arr[2] << " " << arr[3] - arr[0];
  return 0;
}