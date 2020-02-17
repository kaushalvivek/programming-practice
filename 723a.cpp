#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int m,a,b,c;
    cin >> a >> b >> c;
    if (a>=b && a<=c)  m = a;
    else if (a>=c && a<=b)  m = a;
    else if (b>=c && b<=a)  m = b;
    else if (b>=a && b<=c)  m = b;
    else if (c>=a && c<=b)  m = c;
    else if (c>=b && c<=a)  m = c;
    cout << abs(m-a)+abs(m-b)+abs(m-c);
    return 0;
}