#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i, n;
  string s;
  cin >> n;
  cin >> s;
  char current = s[1];
  string new_str = "";
  int removals = 0;
  for (i = 1; i < n; i++)
  {
    if (s[i] == current)
    {
      removals++;
    }
    else
    {
      new_str = new_str + current + s[i];
      current = s[i + 1];
    }
  }
  cout << removals << "\n";
  cout << new_str;
}