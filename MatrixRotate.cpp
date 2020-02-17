// Vivek Kaushal
// Matrix Rotation

#include <iostream>
using namespace std;

void rotate (long long int A[][],long long int mstart, long long int nstart, long long int mend, long long int nend) {
    if (mstart == mend || nstart == nend) return;
    long long int i,j,temp = A[mstart][nstart];
    for (i = nstart+1, i < nend; i++)
        A[mstart][i-1] = A[mstart][i];
    for (i = mstart; i < mend - 1; i++)
        A[nend-1][i] = A[nend-1][i+1];
    for (i = nend-2; i > nstart; i--)
        A[mend-1][i] = A[mend-1][i-1];
    for (i = mend-2; i > nstart+1; i--)
        A[i][mstart]= A[i+1][mstart-1];
    A[nstart+1][mstart] = temp;
    rotate (A, mstart+1,nstart+1,mend-1,nend-1);
}

int main () {
    long long int m,n,r,i,j;
    cin >> m >> n >> r;
    long long int A[m][n];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    while (r--) {
        rotate (A,0,0,m,n);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    return 0;
}