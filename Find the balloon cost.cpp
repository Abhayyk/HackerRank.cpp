#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int g,p,pro,p1,p2;
        cin>>g>>p;
        int p1_total=0;
        int p2_total=0;
        int c1=0,c2=0;
        cin>>pro;
        for (int j=0;j<pro;j++){
            cin>>p1>>p2;
            p1_total+=p1;
            p2_total+=p2;
            
        }
        c1=(p1_total*g)+(p2_total*p);
        c2=(p1_total*p)+(p2_total*g);
        int ne=min(c1,c2);
        cout<<ne<<endl;
        
    }
    return 0;
}
