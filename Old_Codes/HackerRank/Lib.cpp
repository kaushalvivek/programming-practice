//Vivek Kaushal
//Library

#include <iostream>
using namespace std;

int main () {
    int daya,montha,yeara,daye,monthe,yeare;
    cin >> daya >> montha >> yeara >> daye >> monthe >> yeare;
    if (yeara < yeare) cout << 0;
    else if (yeara != yeare)
        cout << 10000;
    else if (montha < monthe) cout << 0;
    else if (montha != monthe)
        cout << (montha - monthe)*500;
    else if (daya <= daye) cout << 0;
    else if (daya != daye)
        cout << (daya - daye)*15;
    return 0;
}