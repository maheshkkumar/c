#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    int i;
    cin>>t;
    while(t--){
        long long int a,b;
        int count = 0;
        cin>>a>>b;
        a = ceil(sqrt(a));
        b = floor(sqrt(b));
        cout<<(int)(b - a) + 1<<endl;
   }
    return 0;
}
