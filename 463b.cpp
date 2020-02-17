#include <iostream>
using namespace std;

int main () {
    int temp,temp1,num,h = 0,m = 0,flag = 1;
    cin >> num;
    while(num--) {
        cin >> temp;
        if (flag) {
            flag= 0;
            m += temp;
            temp1 = temp;
            continue;
        }
        if (temp - temp1 > h) {
            m += ((temp-temp1)-h);
            h = 0;
        }
        else h+= (temp1 - temp);
        // cout << "temp: "<< temp << endl << "temp1: "<< temp1 << endl << "h: " << h  << " "<< "m: " << m << endl;
        temp1 = temp;
    }
    cout << m;
    return 0;
}