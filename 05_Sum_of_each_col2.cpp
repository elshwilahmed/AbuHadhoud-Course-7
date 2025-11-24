/*
    Write a program to fill a 3x3 Matrix with random numbers, then sum each col in seperate array and print results
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
            int a = RandomNumber(1, 100);
            v[i][j] = a;
        }
    }
}

void Print2dArrayElements(short r, short c, vector<vector<int> > &v) {
    cout << "The following is a " << r << "*" << c << " random matrix: \n";
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

vector<int> SumOfEachColIn2DArray(short r, short c, vector<vector<int> > &v) {
    vector<int> res;
    for (short i = 0; i < c; i++) {
        int sum = 0;
        for (short j = 0; j < r; j++) {
            sum += v[j][i];
        }
        res.push_back(sum);
    }
    return res;
}

void PrintSumOfEachColFromArray(vector<int> &res) {
    cout << "The following are the sum of each row: \n";
    for (short i = 0; i < res.size(); i++) {
        cout << "col " << i + 1 << " = " << res[i] << endl;
    }
}

void njr() {
    srand((unsigned) time(NULL));
    vector<vector<int> > v(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v);
    Print2dArrayElements(3, 3, v);
    vector<int> sum_of_each_col = SumOfEachColIn2DArray(3, 3, v);
    PrintSumOfEachColFromArray(sum_of_each_col);
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
