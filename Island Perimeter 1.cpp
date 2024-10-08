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
int islandPerimeter(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int perimeter = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == 1) {
                perimeter += 4;
                if (i > 0 && grid[i - 1][j] == 1) perimeter -= 2; // check top cell
                if (j > 0 && grid[i][j - 1] == 1) perimeter -= 2; // check left cell
            }
        }
    }

    return perimeter;
}

int main() {
    int row, col;
    cin >> row >> col;
    vector<vector<int>> grid(row, vector<int>(col));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> grid[i][j];
        }
    }

    cout << islandPerimeter(grid) << endl;
    return 0;
}
