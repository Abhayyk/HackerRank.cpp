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
     int N;
    cin >> N;

    int Arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> Arr[i];
    }

    int count = 1;
    int max = Arr[0]; 
    for (int i = 0; i < N; ++i) {
        if (Arr[i] > max) {
            count++;
            max = Arr[i]; 
        }
    }

    cout << count << endl;

    return 0;
}
