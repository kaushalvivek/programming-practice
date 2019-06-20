#include <bits/stdc++.h>

using namespace std;

int main()
{
  int b, k;
  cin >> b >> k;
  int sum = 0, i = 1, temp;
  while (i++ < k)
  {
    cin >> temp;
    sum += temp;
  }
  int last;
  cin >> last;
  sum = sum % 10;
  if ((b * sum + last) % 2 == 0)
    cout << "even";
  else
    cout << "odd";
  return 0;
}