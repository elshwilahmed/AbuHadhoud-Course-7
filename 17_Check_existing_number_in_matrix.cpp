/*
Write a program to fill a 3x3 matrix with random numbers, then ask the user for a number to look for in the matrix
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
            int a = RandomNumber(1, 99);
            v[i][j] = a;
        }
    }
}

void Print2dArrayElements(short r, short c, vector<vector<int> > &v) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            cout << v[i][j] << "  ";
        }
        cout << endl;
    }
}

bool IsNumberExistInMatrix(short r, short c, vector<vector<int> > &v, int number) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            if (v[i][j] == number)
                return true;
        }
    }
    return false;
}

void njr() {
    srand((unsigned) time(NULL));

    vector<vector<int> > v1(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v1);
    cout << "\nMatrix 1:\n";
    Print2dArrayElements(3, 3, v1);

    int number;
    cout << "Enter The Number To look for in matrix: " << flush;
    cin >> number;
    if (IsNumberExistInMatrix(3, 3, v1, number))
        cout << "Yes it is there \n" << endl;
    else
        cout << "No it isn't there \n" << endl;
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
