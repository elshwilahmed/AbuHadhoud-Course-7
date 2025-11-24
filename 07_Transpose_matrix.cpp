/*
    Write a program to fill a 3x3 Matrix with ordered numbers, then transpose matrix 
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
void SetArray2D_WithOrderedNumbers(short r, short c, vector<vector<int> > &v) {
    short cnt = 1;
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            v[i][j] = cnt;
            cnt++;
        }
    }
}

void Print2dArrayElements(short r, short c, vector<vector<int> > &v) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

void TransposeMatrix(short r, short c, vector<vector<int> > &v, vector<vector<int> > &T) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            T[j][i] = v[i][j];
        }
    }
}

void njr() {
    vector<vector<int> > v(3, vector<int>(3));
    SetArray2D_WithOrderedNumbers(3, 3, v);
    cout << "The following is a " << 3 << "*" << 3 << " ordered matrix: \n";
    Print2dArrayElements(3, 3, v);

    vector<vector<int> > T(3, vector<int>(3));
    TransposeMatrix(3, 3, v, T);
    cout << "The following is a " << 3 << "*" << 3 << " Transpose matrix: \n";
    Print2dArrayElements(3, 3, T);
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


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.
