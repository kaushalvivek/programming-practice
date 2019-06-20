#include <bits/stdc++.h>

using namespace std;

int main()
{
  long int a, b;
  cin >> a >> b;
  if (b % a != 0)
  {
    cout << "-1";
    return 0;
  }
  long int q = b / a;

  long int two = 0, three = 0;
  long int temp = q;
  while (temp % 2 == 0)
  {
    temp /= 2;
    two++;
  }
  while (temp % 3 == 0)
  {
    temp /= 3;
    three++;
  }

  if (temp != 1)
  {
    cout << "-1";
    return 0;
  }

  cout << two + three;
  return 0;
}