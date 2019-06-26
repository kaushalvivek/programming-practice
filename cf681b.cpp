#include <bits/stdc++.h>

using namespace std;

int main()
{
  long int n, test;
  cin >> n;
  int a = 1234567;
  int b = 123456;
  int c = 1234;
  int i, j, k;
  for (i = 0; i <= n / a; i++)
  {
    for (j = 0; j <= n / b; j++)
    {
      test = n - i * a - j * b;
      if (test >= 0 && test % c == 0)
      {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}