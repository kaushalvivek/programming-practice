#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,arr[6][6];
    for (i=0; i<6;i++)
        for(j=0;j<6;j++)
            cin >> arr[i][j];
    
    int sum = -100;
    int test_sum;

    for (i=0;i < 4; i++)
        for (j=0;j<4;j++){
            test_sum = 0;
            test_sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]; 
            if (sum < test_sum)
                sum = test_sum;
        }
    cout << sum;
    return 0;
}