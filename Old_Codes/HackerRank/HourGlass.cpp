#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    int i,j,A[6][6],sum = -100001;
    for (i = 0; i < 6; i++)
        for (j = 0; j < 6; j++)
            cin >> A[i][j];
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++) {
            int temp = A[i][j] + A[i][j+1] + A[i][j+2] + A[i+1][j+1] + A[i+2][j] + A[i+2][j+1] + A[i+2][j+2];
            if (temp > sum) sum = temp;
        }
    cout << sum;
    return 0;
}