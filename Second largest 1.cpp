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
  int a, b, c;
    char comma1, comma2;

    // Read input of three numbers separated by commas
    cin >> a >> comma1 >> b >> comma2 >> c;

    int second_largest;
    // Determine the second largest number among a, b, and c
    if ((a > b && a < c) || (a > c && a < b)) {
        second_largest = a;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        second_largest = b;
    } else {
        second_largest = c;
    }

    // Print the second largest number
    cout << second_largest << endl;
    return 0;
}
