#include <bits/stdc++.h>

using namespace std;

int main()
{
  long int amount;
  cin >> amount;
  cout << amount / 100 + (amount % 100) / 20 + (amount % 20) / 10 + (amount % 10) / 5 + (amount % 5);
  return 0;
}