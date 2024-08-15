#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,i, s,e, mid; 
    
    cin>>N;  
    int arr[N];   
    for(i=0;i<N;i++){   
        cin>>arr[i];
    }
    s =0 , e = N-1;
    int target; 
    cin>>target;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == target){
            cout<<mid;
            return 0;
        }
        else if(arr[mid] > target){
            e  = mid -1;
        }
        else{
            s = mid+1;
        }
        
    }
    cout<<s;
    return 0;
}
