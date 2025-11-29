/*
Write a program to count all, small and capital letters
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

void CapitalLettersCnt(string s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i]))
            cnt++;
    }
    cout << "Capital letters count: " << cnt << endl;
}

void SmallLettersCnt(string s) {
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i]))
            cnt++;
    }
    cout << "Small letters count: " << cnt << endl;
}

void njr() {
    string s;
    cout << "Please enter a string: \n" << flush;
    getline(cin, s);

    cout << "string length: " << s.length() << endl;
    CapitalLettersCnt(s);
    SmallLettersCnt(s);
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
