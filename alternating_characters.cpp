#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int t, i, count;
    cin>>t;
    while(t--){
        count = 0;
        char name[100000];
        cin>>name;
        int l = strlen(name);
        for(i=0;i<l;i++){
            if(name[i]==name[i+1]){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
