#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long int i;
    long int count =0;
    int len = s.length();
    for (i=0;i<=len;i++) {
        if (s[i] == 'a') count++;
    }
    count*=(n/len);
    for (i=0;i<(n%len);i++) {
        if (s[i] == 'a') count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

