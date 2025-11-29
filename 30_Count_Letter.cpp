/*
Write a program to count letter in string
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

short CountLetterinString(string s, char c) {
    short cnt = 0;
    for (auto &i: s)
        if (i == c)
            cnt++;
    return cnt;
}

void njr() {
    string s;
    cout << "Please enter a string: \n" << flush;
    getline(cin, s);

    char c;
    cout << "Please enter a character: \n" << flush;
    cin >> c;

    cout << "Letter \'" << c << "\' count: " << CountLetterinString(s, c) << endl;
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
