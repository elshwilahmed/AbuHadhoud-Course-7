/*
Write a program to invert all letters
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

string invert_string(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = invert_char(s[i]);
    }
    return s;
}

void njr() {
    string s;
    cout << "Please enter a string: \n" << flush;
    getline(cin, s);

    cout << "\nAfter inverting all letters: \n" << invert_string(s) << endl;
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
