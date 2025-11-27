/*
    Write a program to fill  3x3 Matrix with random numbers, then print middle row and col
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

void PrintMiddleRow(short r, short c, vector<vector<int> > &v) {
    short middle_row = r / 2;
    cout << "Middle Row of Matrix1 is: \n";
    for (short i = 0; i < c; i++) {
        cout << setfill('0') << setw(2) << v[middle_row][i] << " ";
    }
    cout << endl;
}

void PrintMiddleCol(short r, short c, vector<vector<int> > &v) {
    short middle_col = c / 2;
    cout << "Middle col of Matrix1 is: \n";
    for (short i = 0; i < r; i++) {
        cout << setfill('0') << setw(2) << v[i][middle_col] << " ";
    }
    cout << endl;
}

void njr() {
    srand((unsigned) time(NULL));
    vector<vector<int> > v1(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v1);
    cout << "\nMatrix 1:\n";
    Print2dArrayElements(3, 3, v1);
    PrintMiddleRow(3, 3, v1);
    PrintMiddleCol(3, 3, v1);
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
