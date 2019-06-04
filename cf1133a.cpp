#include <bits/stdc++.h>

using namespace std;

int main()
{
  string start, end;
  cin >> start >> end;
  int start_hour = stoi(start);
  int end_hour = stoi(end);

  string s_min1(1, start[3]);
  string s_min2(1, start[4]);
  int start_min = stoi(s_min1 + s_min2);

  string e_min1(1, end[3]);
  string e_min2(1, end[4]);
  int end_min = stoi(e_min1 + e_min2);

  int diff = (end_hour - start_hour) * 60 + end_min - start_min;
  // cout << "D: " << diff << "\n";
  diff /= 2;
  int ans_hour = start_hour + diff / 60 + (start_min + (diff % 60)) / 60;
  int ans_min = (start_min + diff % 60) % 60;

  if (ans_hour < 10 && ans_min < 10)
    cout << '0' << ans_hour << ":" << '0' << ans_min;
  else if (ans_hour < 10)
    cout << '0' << ans_hour << ":" << ans_min;
  else if (ans_min < 10)
    cout << ans_hour << ":" << '0' << ans_min;
  else
    cout << ans_hour << ":" << ans_min;
  return 0;
}