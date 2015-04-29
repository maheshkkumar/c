#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int t,i,b,w,x,y,z;
    cin>>t;
    for(i=0;i<t;i++) {
        cin>>b>>w;
        cin>>x>>y>>z;
        if((x==y && x==z)||(x<z+y && y<z+x))
            cout<<b*x+w*y<<endl;
        else if(x > z+y)
            cout<<b*(z+y)+w*y<<endl;
        else if(y > z+x)
            cout<<b*x+(z+x)*w<<endl;
        else
            cout<<b*x+w*y<<endl;
    }
    return 0;
}

