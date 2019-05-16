#include <bits/stdc++.h>

using namespace std;

int main()
{
  string inp;
  cin >> inp;

  // Test 1
  int i = 0, bucket_one = 0, bucket_two = 0, last_a = -1;

  while (i++ < inp.size())
    if (inp[i] == 'a')
      last_a = i;

  cout << "Last a: " << last_a << "\n";
  cout << "Input Size: " << inp.size() << "\n";

  i = 0;
  while (i++ < inp.size())
  {
    if (inp[i] == 'a')
      continue;
    else if (i < last_a)
      bucket_one++;
    else
      bucket_two++;
  }

  cout << "1: " << bucket_one << "\n"
       << "2: " << bucket_two << "\n";

  if (bucket_one > bucket_two)
  {
    cout << ":(";
    return 0;
  }

  // Test 2
  string inp_wa;
  i = 0;
  while (i++ < inp.size())
    if (inp[i] != 'a')
      inp_wa += inp[i];
  cout << inp_wa;
  return 0;
}