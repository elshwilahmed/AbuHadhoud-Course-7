/*
Write a program to capitalized each word
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
string CapitalizedWords(string s) {
    bool isfirst = true;
    for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ' && isfirst)
        s[i] = toupper(s[i]);
        (s[i] == ' ') ? isfirst = true : isfirst = false;
    }

    return s;
}

void njr() {
    string s;
    cout << "Please Enter Your String: \n" << flush;
    getline(cin, s);
    cout << CapitalizedWords(s);
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
