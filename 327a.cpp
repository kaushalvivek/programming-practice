#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int temp,sum = 0, max = 0, ones = 0;

    while (n--) {
        cin >> temp;
        if (temp == 1) {
            ones++;
            sum-=1;
            if(sum < 0) sum = 0;
        }
        else {
            sum++;
            if(max < sum) max = sum;
        } 
    }
    if (max == 0) ones--;
    cout << max+ones;
    return 0;
}