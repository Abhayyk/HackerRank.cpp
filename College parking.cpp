#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
     int R, C;
    cin >> R >> C;

    int matrix[20][20];  

    
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> matrix[i][j];
        }
    }

    int mRow = 0;
    int mCount = 0;

    
    for (int i = 0; i < R; ++i) {
        int count = 0;
        for (int j = 0; j < C; ++j) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }
        if (count > mCount) {
            mCount = count;
            mRow = i + 1; 
        }
    }

    cout << mRow << endl;

    return 0;
}
