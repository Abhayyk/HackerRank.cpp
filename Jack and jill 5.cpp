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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , count=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    while(1){
        int zero=0;
        for(int j=0; j<n; j++){
            if(arr[j]!=0){
                zero=1;
                break;
            }
        }
        if(zero==0)
            break;
        else{
            int even=0;
            for(int j=0; j<n; j++){
                if(arr[j]%2==1){
                    even=1;
                    break;
                    
                }
            }
            if(even==0){
                for (int j=0; j<n; j++){
                    arr[j]=arr[j]/2;
                }
                count++;
            }
            else{
                for(int j=0; j<n; j++){
                    if(arr[j]%2 !=0){
                        arr[j] =arr[j]-1;
                        count++;
                    }
                }
            }
        }
    }
        cout<<count;
    return 0;
}
