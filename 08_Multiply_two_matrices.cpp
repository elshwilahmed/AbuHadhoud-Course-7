/*
    Write a program to fill two 3x3 Matrix with random numbers from 1 to 10, then multiply them
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
int RandomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}

void Set2dArrayElementsWithRandomNumbers(short r, short c, vector<vector<int> > &v) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            int a = RandomNumber(1, 10);
            v[i][j] = a;
        }
    }
}

void Print2dArrayElements(short r, short c, vector<vector<int> > &v) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            cout << setfill('0') << setw(2) << v[i][j] << " ";
        }
        cout << endl;
    }
}

void MultiplyMatrix(short r, short c, vector<vector<int> > &v1, vector<vector<int> > &v2, vector<vector<int> > &res) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            res[i][j] = v1[i][j] * v2[i][j];
        }
    }
}

void njr() {
    srand((unsigned) time(NULL));
    vector<vector<int> > v1(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v1);
    cout << "\nMatrix 1:\n";
    Print2dArrayElements(3, 3, v1);

    vector<vector<int> > v2(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v2);
    cout << "\nMatrix 2:\n";
    Print2dArrayElements(3, 3, v2);

    vector<vector<int> > multiplication(3, vector<int>(3));
    MultiplyMatrix(3, 3, v1, v2, multiplication);
    cout << "\nResults: \n";
    Print2dArrayElements(3, 3, multiplication);
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
