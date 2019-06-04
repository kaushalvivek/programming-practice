#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int temp_chest, temp_key, i;
  int chest_o = 0, chest_e = 0, key_o = 0, key_e = 0;
  for (i = 0; i < n; i++)
  {
    cin >> temp_chest;
    if (temp_chest % 2 == 0)
      chest_e++;
    else
      chest_o++;
  }
  for (i = 0; i < m; i++)
  {
    cin >> temp_key;
    if (temp_key % 2 == 0)
      key_e++;
    else
      key_o++;
  }
  int ans = min(key_o, chest_e) + min(key_e, chest_o);
  cout << ans;
  return 0;
}