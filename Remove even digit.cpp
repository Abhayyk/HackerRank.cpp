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
   int num;
    cin>>num;
    int temp=num,length=0;
    while(temp)
    {
        temp/=10;
        length++;
    }
    int flag=1;
    length--;
    while(num>0)
    {
        int temp=pow(10,length);
        int digit=num/temp;
        if(digit&1)
        {
            cout<<digit;
            flag=0;
        }
        num=num%temp;
        length--;
    }
    if(flag)
        cout<<0;
    return 0;
}
