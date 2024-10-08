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
       int n;
    cin >> n;
    int prices[n];
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    int min_price = INT_MAX, max_profit = 0;
    for (int i = 0; i < n; ++i) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }

    cout << max_profit << endl;
    return 0;
}
