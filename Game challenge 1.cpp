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
       int n,lead=0,win=0,s1,s2,i; 
    cin >> n;
    int t1=0, t2=0;
    for(i=0;n>i;i++)
    {
        cin >> s1 >> s2;
        t1 += s1;
        t2 += s2;
        if(t1>t2)
        {
            if((t1-t2)>lead)
            {
                lead=t1-t2;
                win=1;
            }
        }
        else 
        {
            if((t2-t1)>lead)
            {
                lead=t2-t1;
                win=2;
            }
        }
    }
    cout << win << " " << lead;
    return 0;
}
