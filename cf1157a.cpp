#include <bits/stdc++.h>

using namespace std;

int f(long int x)
{
  cout << "prev : " << x << "\n";
  x += 1;
  while (x % 10 == 0)
    x /= 10;
  cout << "next : " << x << "\n";
  return x;
}

bool check(long int arr[], long int pointer)
{
  long int i;
  for (i = 0; i < pointer; i++)
    if (arr[i] == arr[pointer])
      return false;
  return true;
}

int main()
{
  long int n;
  cin >> n;
  long int arr[n];
  arr[0] = n;
  long int pointer = 0;
  arr[pointer + 1] = f(arr[pointer]);
  pointer++;
  while (check(arr, pointer))
  {
    arr[pointer + 1] = f(arr[pointer]);
    pointer++;
  }
  cout << pointer;
  return 0;
}