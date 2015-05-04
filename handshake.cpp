
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
    while(T--)
    {
        long long int a;
        cin>>a;
        if(a < 2 )
            cout<<0<<"\n";
        else if( a == 2 )
            cout<<1<<"\n";
         else if( a > 2)
                cout<<a*(a-1)/2<<"\n";

    }
    return 0;
}
