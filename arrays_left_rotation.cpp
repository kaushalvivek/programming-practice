#include <bits/stdc++.h>

using namespace std;

int main () {
    int arr_len, rot;
    cin >> arr_len >> rot;
    int i,arr[arr_len];
    for (i = 0; i < arr_len; i++)
        cin >> arr[i];
    for (i = rot; i < arr_len ; i++)
        cout << arr[i] <<" ";
    for (i = 0; i < rot; i++)
        cout << arr[i] << " ";
    return 0;
}