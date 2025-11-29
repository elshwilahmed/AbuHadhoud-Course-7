/*
Write a program to count letter in string match and invert case
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//*-------------------------------------------*
void fastIO(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

//*-------------------------------------------*

char invert_char(char c) {
    if (islower(c))
        return toupper(c);
    return tolower(c);
}

short CountLetterinString(string s, char c) {
    short cnt = 0;
    for (auto &i: s)
        if (i == c)
            cnt++;
    return cnt;
}

short CountLetterMatchCase(string s, char c, bool matchcase = true) {
    short cnt = 0;
    if (matchcase) {
        return CountLetterinString(s, c);
    }
    for (auto &i: s) {
        if (tolower(i) == tolower(c))
            cnt++;
    }
    return cnt;
}

void njr() {
    string s;
    cout << "Please enter a string: \n" << flush;
    getline(cin, s);

    char c;
    cout << "Please enter a character: \n" << flush;
    cin >> c;

    cout << "Letter \'" << c << "\' count: " << CountLetterMatchCase(s, c) << endl;
    cout << "Letter \'" << c << "\' or \'" << invert_char(c) << "\' count: " << CountLetterMatchCase(s, c, false) <<
            endl;
}


signed main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fastIO();
    int t = 1; //cin >> t;
    while (t--) {
        njr();
    }
    return 0;
}
